/*
 * XREFs of NtAcceptConnectPort @ 0x1406E5210
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __stdcall NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         (unsigned __int64)PortHandle,
         0,
         0LL,
         0LL,
         0LL,
         (__int64)PortContext,
         (unsigned __int64)ConnectionRequest,
         0LL,
         AcceptConnection,
         (__m128i *)ServerView,
         (unsigned __int64)ClientView,
         1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
