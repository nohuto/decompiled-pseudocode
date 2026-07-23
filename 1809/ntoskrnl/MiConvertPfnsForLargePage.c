/*
 * XREFs of MiConvertPfnsForLargePage @ 0x1402C53DC
 * Callers:
 *     MiAssembleLargePagePfnList @ 0x14085DE5C (MiAssembleLargePagePfnList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiConvertPfnsForLargePage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned int)a2;
  v4 = MiLargePageSizes[(unsigned int)a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = a1 + 35;
    do
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 11), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14, a2, a3);
        while ( *(__int64 *)(v7 - 11) < 0 );
      }
      *(_BYTE *)v7 &= 0xF8u;
      v8 = MiLargePageContainingFrames[v3];
      *(_QWORD *)(v7 - 11) &= 0xC000000000000000uLL;
      v9 = *(_QWORD *)(v7 + 5) ^ v8;
      *(_QWORD *)(v7 - 27) = 0LL;
      *(_QWORD *)(v7 - 19) = ZeroPte;
      v10 = *(_BYTE *)(v7 - 1);
      *(_QWORD *)(v7 + 5) ^= v9 & 0xFFFFFFFFFLL;
      *(_BYTE *)(v7 - 1) = v10 & 0xF8;
      _InterlockedAnd64((volatile signed __int64 *)(v7 - 11), 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
      if ( (v6 & 0xF) == 0 && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
      ++v6;
    }
    while ( v6 < v4 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
