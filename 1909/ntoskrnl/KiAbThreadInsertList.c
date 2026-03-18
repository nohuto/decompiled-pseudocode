/*
 * XREFs of KiAbThreadInsertList @ 0x140133E38
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003CEE0 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400803F0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400C6EA8 (KiAbSetMinimumThreadPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140101098 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x140130568 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v4; // esi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[5] - 1;
        v10[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v4 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  KiReleaseThreadLockSafe(a1);
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
  return v4;
}
