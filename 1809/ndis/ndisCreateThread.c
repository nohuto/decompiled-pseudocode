/*
 * XREFs of ndisCreateThread @ 0x1C00C4E7C
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050588 (ndisPeriodicReceivesAddCpu.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C4DF8 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

__int64 __fastcall ndisCreateThread(void *a1, void *a2, KPRIORITY a3, PVOID *a4)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  struct _KTHREAD *v9; // rcx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES v12; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  Handle = a1;
  v12.Length = 48;
  v12.RootDirectory = 0LL;
  v12.Attributes = 512;
  v12.ObjectName = 0LL;
  *(_OWORD *)&v12.SecurityDescriptor = 0LL;
  v6 = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v12, 0LL, 0LL, (PKSTART_ROUTINE)ndisReceiveWorkerThread, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025B >= 2u )
      WPP_SF_D(0x52u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v6);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = (struct _KTHREAD *)Object;
    v7 = v8;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v9, a3);
    ZwClose(Handle);
  }
  return v7;
}
