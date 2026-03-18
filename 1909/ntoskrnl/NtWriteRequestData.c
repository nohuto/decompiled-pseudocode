/*
 * XREFs of NtWriteRequestData @ 0x140884950
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCopyRequestData @ 0x140885590 (AlpcpCopyRequestData.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  HANDLE v9; // rdx
  NTSTATUS v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = Index;
  v9 = PortHandle;
  LOBYTE(PortHandle) = 1;
  v10 = AlpcpCopyRequestData(PortHandle, v9, Message, v7, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
