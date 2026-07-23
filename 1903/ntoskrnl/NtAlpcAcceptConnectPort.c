/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x140646720
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(
          (_DWORD)PortHandle,
          Flags & 0xC0000000,
          (_DWORD)ConnectionPortHandle,
          (_DWORD)ObjectAttributes,
          (__int64)PortAttributes,
          (__int64)PortContext,
          (__int64)ConnectionRequest,
          (__int64)ConnectionMessageAttributes,
          AcceptConnection,
          0LL,
          0LL,
          0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
