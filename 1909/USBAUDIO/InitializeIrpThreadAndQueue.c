/*
 * XREFs of InitializeIrpThreadAndQueue @ 0x1C0028D78
 * Callers:
 *     DeviceStart @ 0x1C0020270 (DeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeIrpThreadAndQueue(void *a1, __int64 a2)
{
  NTSTATUS v2; // ebx
  PVOID *Object; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = a1;
  v2 = 0;
  Object = (PVOID *)(a2 + 688);
  if ( !*(_QWORD *)(a2 + 688) )
  {
    *(_BYTE *)(a2 + 696) = 0;
    v2 = PsCreateSystemThread(&Handle, 0, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)ProcessIrpsThread, (PVOID)a2);
    if ( v2 >= 0 )
    {
      v2 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, Object, 0LL);
      if ( v2 < 0 )
      {
        *(_BYTE *)(a2 + 696) = 1;
        KeReleaseSemaphore((PRKSEMAPHORE)(a2 + 656), 0, 1, 0);
      }
      ZwClose(Handle);
    }
  }
  return (unsigned int)v2;
}
