/*
 * XREFs of NtCreateWaitablePort @ 0x14071E8E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCreateConnectionPort @ 0x1406B66C8 (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __stdcall NtCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectInfoLength,
        ULONG MaxDataLength,
        ULONG NPMessageQueueSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, (int)ObjectAttributes, 0LL, MaxDataLength, 1, 1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
