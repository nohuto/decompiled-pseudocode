/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x14010C0BC
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010BF50 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x14010C050 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x14015EF10 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14031D170 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14031D1D0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14031D220 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
