/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x14010C0F4
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010BF50 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x14010C050 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x14015EF10 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14031D170 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14031D1D0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14031D220 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // di
  bool v5; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int16 v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0;
  v4 = v12;
  _disable();
  v5 = (v4 & 0x200) != 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v9[5] - 1;
        v9[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v5 )
      _enable();
    do
      KeYieldProcessorEx(&v13, a2, a3);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v5;
}
