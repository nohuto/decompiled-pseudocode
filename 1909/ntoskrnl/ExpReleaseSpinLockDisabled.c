/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x14010A354
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010A2E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140158B10 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14033BC50 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14033BCB0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14033BD00 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
