/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x14010A4D0
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x14010A2E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010A390 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x14010A430 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x140158B10 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x14033BC50 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x14033BCB0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x14033BD00 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  __int16 v1; // bx
  struct _KPRCB *CurrentPrcb; // rsi
  bool v4; // bl
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int16 v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = v12;
  v13 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (v1 & 0x200) != 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[5];
      SchedulerAssist[5] = v9 + 1;
      if ( v9 == -1 )
LABEL_12:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v7[5] - 1;
        v7[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( v4 )
      _enable();
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)a1 );
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v8[5];
        v8[5] = v11 + 1;
        if ( v11 == -1 )
          goto LABEL_12;
      }
    }
  }
  return v4;
}
