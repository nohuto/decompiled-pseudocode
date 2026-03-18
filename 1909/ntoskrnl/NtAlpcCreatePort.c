/*
 * XREFs of NtAlpcCreatePort @ 0x1406D9140
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(int a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3, 0, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
