/*
 * XREFs of NtReadRequestData @ 0x1408850F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCopyRequestData @ 0x140885DF0 (AlpcpCopyRequestData.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpCopyRequestData(0LL, PortHandle, Message, Index, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
