/*
 * XREFs of KeEnumerateQueueApc @ 0x140294C70
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x14026E024 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v7; // di
  char v8; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  _QWORD **v15; // rsi
  _QWORD *i; // rbx
  struct _KPRCB *v17; // rcx
  __int64 result; // rax
  int v19; // [rsp+50h] [rbp+8h] BYREF

  if ( a4 )
  {
    v7 = *a4;
    v8 = *a4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v19, (__int64)a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  do
  {
    v15 = (_QWORD **)(16LL * v7 + a1 + 152);
    for ( i = *v15; i != v15; i = (_QWORD *)*i )
      a2(i - 2, 88LL, a3);
    ++v7;
  }
  while ( v7 <= v8 );
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
