/*
 * XREFs of MiInitializeZeroedPfns @ 0x14012362C
 * Callers:
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeZeroedPfns(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = 0LL;
  if ( a2 )
  {
    v7 = (a3 >> 3) & 0xFFFFFFFFFFELL;
    v8 = (volatile signed __int32 *)(a1 + 3);
    do
    {
      v14 = 0;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *(__int64 *)v8 < 0 );
      }
      v9 = *((_QWORD *)v8 - 2);
      *((_QWORD *)v8 - 2) = 0xFFFFF68000000000uLL;
      v10 = *((_QWORD *)v8 - 3) & 0xFFFFF00000000001uLL;
      *((_QWORD *)v8 - 2) = v9;
      *((_QWORD *)v8 - 3) = v7 | v10;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 12;
      if ( (v6 & 0xF) == 0 && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
      ++v6;
    }
    while ( v6 < a2 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(CurrentIrql);
  return v3;
}
