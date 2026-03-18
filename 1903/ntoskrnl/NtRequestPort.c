/*
 * XREFs of NtRequestPort @ 0x1406E6570
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v7, 0, 0x40uLL);
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7[0] = Object;
    CurrentThread = KeGetCurrentThread();
    LODWORD(v7[6]) = 0x10000;
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage((__int64)v7, (__m256i *)LpcMessage, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return v4;
}
