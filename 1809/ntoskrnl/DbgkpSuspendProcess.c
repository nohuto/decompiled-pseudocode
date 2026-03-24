/*
 * XREFs of DbgkpSuspendProcess @ 0x1408116E4
 * Callers:
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140810BB4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140810CAC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140810DCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x140588E24 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
