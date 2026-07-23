/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x14028ECBC
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x14016FCEC (KiAdjustTimerDueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  char v7[4]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+24h] [rbp-34h]
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  if ( KiSerializeTimerExpiration )
  {
    v2 = a2 - KiClockTimerOneShotStartTime;
    v10 = v2;
    if ( v2 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += v2;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v10 = -v10;
      v8 = 0;
      v3 = KiProcessorBlock[0];
      if ( !KiSerializeTimerExpiration )
        v3 = a1;
      v7[0] = 1;
      v4 = v3 + 13952;
      v11 = 1;
      v9 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), v4, (__int64)v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
}
