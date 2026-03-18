/*
 * XREFs of DbgkpSuspendProcess @ 0x14084B10C
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14084A694 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1406A34C4 (PsFreezeProcess.c)
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
