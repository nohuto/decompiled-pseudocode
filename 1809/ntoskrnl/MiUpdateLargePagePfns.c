/*
 * XREFs of MiUpdateLargePagePfns @ 0x1402C5EE8
 * Callers:
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  LOGICAL ShouldYieldProcessor; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  int v19; // [rsp+68h] [rbp+10h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp+18h]

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = MiSwizzleInvalidPte(128LL);
  v7 = 48 * a2 - 0x58000000000LL;
  v9 = 0;
  v10 = v7 + 48 * v8;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  do
  {
    v19 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v19, v5, v12);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
      v5 = (unsigned __int64)Process;
      v12 = 2LL;
    }
    if ( (*(_DWORD *)(v7 + 16) & 0x3E0LL) != 0 )
    {
      v9 = 1;
      v13 = dword_14043B148 & (unsigned int)a2 | (((*(_QWORD *)(v7 + 40) >> 36) & 3) << byte_14043B10A) | ((unsigned int)(*(_QWORD *)(v7 + 40) >> 58) << byte_14043B109);
      v14 = 3 * v13;
      *(_QWORD *)v7 = *(_QWORD *)(a1 + 24 * v13 + 16);
      ++*(_QWORD *)(a1 + 8 * v14 + 8);
      *(_QWORD *)(a1 + 8 * v14 + 16) = v7;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0xFFFFF68000000000uLL;
      *(_QWORD *)(v7 + 16) = v6;
      *(_QWORD *)v7 ^= (*(_QWORD *)v7 ^ (v5 >> 3)) & 0xFFFFFFFFFFELL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LODWORD(a2) = a2 + 1;
    v7 += 48LL;
    if ( (++v4 & 0xF) == 0 )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v12 = 2LL;
      if ( ShouldYieldProcessor )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v12 = 2LL;
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
    v5 = (unsigned __int64)Process;
  }
  while ( v7 != v10 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
  __writecr8(CurrentIrql);
  return v9;
}
