/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x14010C03C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010BED0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010BF50 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x14010BFD0 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x14015EE10 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14031CF80 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14031CFE0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14031D030 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseSpinLockDisabled(volatile signed __int64 *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax

  _InterlockedAnd64(a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      result = (unsigned int)(SchedulerAssist[5] - 1);
      SchedulerAssist[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( a2 )
    _enable();
  return result;
}
