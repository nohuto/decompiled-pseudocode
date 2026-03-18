/*
 * XREFs of DbgkpSuspendProcess @ 0x14084A80C
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140849CAC (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140849D94 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1406A0E4C (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
