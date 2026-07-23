/*
 * XREFs of NtAlpcDisconnectPort @ 0x1406DA180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpDisconnectPort @ 0x14064986C (AlpcpDisconnectPort.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Flags;
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((char *)Object, v3);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
