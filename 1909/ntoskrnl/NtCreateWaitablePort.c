/*
 * XREFs of NtCreateWaitablePort @ 0x140749360
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
