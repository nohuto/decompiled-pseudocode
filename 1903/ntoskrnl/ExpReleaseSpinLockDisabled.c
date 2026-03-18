/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x14010A784
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010A710 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddUlong @ 0x140158470 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14033C1F0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14033C250 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14033C2A0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
