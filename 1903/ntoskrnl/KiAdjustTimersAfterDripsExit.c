/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1402A55AC
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033A00 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x1401793DC (KiAdjustTimerDueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (unsigned __int64)memset(v10, 0, 0x28uLL);
  if ( KiSerializeTimerExpiration )
  {
    v5 = a2 - KiClockTimerOneShotStartTime;
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    v10[3] = v5;
    if ( v5 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += v5;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v10[3] = -v10[3];
      HIDWORD(v10[0]) = 0;
      v6 = KiProcessorBlock[0];
      if ( !KiSerializeTimerExpiration )
        v6 = a1;
      LOBYTE(v10[0]) = 1;
      v7 = v6 + 13952;
      LOBYTE(v10[4]) = 1;
      *(_OWORD *)&v10[1] = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), v7, (__int64)v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
