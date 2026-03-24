/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x140142ED4
 * Callers:
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140566640 (PopNewWakeInfo.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleaseWakeSourceSpinLock(__int64 a1)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  KxReleaseQueuedSpinLock((volatile signed __int64 **)a1);
  v2 = *(_BYTE *)(a1 + 16);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
