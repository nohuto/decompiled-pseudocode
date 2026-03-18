/*
 * XREFs of MiLargeFreePageToMdl @ 0x14017C02C
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x1400C4A94 (MiIsFreeZeroPfnCold.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400F7688 (MiTryUnlinkNodeLargePage.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r14
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // r12
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = MiLargePageSizes[a3];
  v6 = a2 & ~(v5 - 1);
  if ( (int)MiTryUnlinkNodeLargePage(a1, v6, a3, 0) > 1 )
    return 0LL;
  v7 = 48 * v6 - 0x58000000000LL;
  v8 = v6 + v5;
  v19 = ZeroPte;
  v9 = (volatile signed __int32 *)(v7 + 48 * v5);
  if ( (*(_BYTE *)(v7 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v19);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v11 = (_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL);
  do
  {
    LOBYTE(v8) = v8 - 1;
    v11 -= 6;
    v20 = 0;
    while ( _interlockedbittestandset64(v9 - 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *((__int64 *)v9 - 3) < 0 );
    }
    v9 = (volatile signed __int32 *)(v11 - 5);
    *(v11 - 5) = 0LL;
    LOBYTE(v12) = MiIsFreeZeroPfnCold((__int64)(v11 - 5));
    v13 = v19;
    *(v11 - 3) = v19;
    if ( v12 )
      *(v11 - 3) = MiUpdatePageFileHighInPte(v13, 4294967293LL);
    MiSetPfnBlink((__int64)(v11 - 5), 0LL, 1);
    *v11 &= 0xFFFFFFF000000000uLL;
    *((_BYTE *)v11 - 6) = *((_BYTE *)v11 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v11 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v8 & 0xF) == 0 && KeShouldYieldProcessor() )
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
  }
  while ( (unsigned __int64)v9 > v7 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v14 = (unsigned __int64)*(unsigned int *)(a4 + 40) >> 12;
    *(_DWORD *)(a4 + 40) += (_DWORD)v5 << 12;
    v15 = (_QWORD *)(a4 + 48 + 8 * v14);
    do
    {
      *v15++ = v6++;
      --v5;
    }
    while ( v5 );
  }
  return 1LL;
}
