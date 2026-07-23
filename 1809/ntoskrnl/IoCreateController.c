/*
 * XREFs of IoCreateController @ 0x14081D3E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDeviceQueue @ 0x1400DAE50 (KeInitializeDeviceQueue.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+50h] [rbp-30h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  __int128 v9; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 0LL;
  v2 = Size;
  v5 = 48;
  v6 = 0LL;
  v8 = IopCaseInsensitive != 0 ? 576 : 512;
  v7 = 0LL;
  v9 = 0LL;
  if ( (int)ObCreateObjectEx(0, (_DWORD *)IoControllerObjectType, (int)&v5, 0, v4, Size + 72, 0, 0, &Object, 0LL) >= 0
    && (int)ObInsertObjectEx(Object, 0LL, 3LL, 1, 0, &Object, (unsigned __int64 *)&Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    v1 = (struct _CONTROLLER_OBJECT *)Object;
    memset(Object, 0, v2 + 72);
    v1->Type = 2;
    v1->Size = v2 + 72;
    v1->ControllerExtension = &v1[1];
    KeInitializeDeviceQueue(&v1->DeviceWaitQueue);
  }
  return v1;
}
