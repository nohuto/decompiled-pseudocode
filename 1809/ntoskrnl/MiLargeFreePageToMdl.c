/*
 * XREFs of MiLargeFreePageToMdl @ 0x14012B9B8
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v5 = MiLargePageSizes[(unsigned int)a3];
  v6 = a2 & ~(v5 - 1);
  if ( (int)MiTryUnlinkNodeLargePage(a1, v6, a3, 0LL) > 1 )
    return 0LL;
  v8 = 48 * v6 - 0x58000000000LL;
  v9 = v6 + v5;
  v21 = ZeroPte;
  v10 = (volatile signed __int32 *)(v8 + 48 * v5);
  if ( (*(_BYTE *)(v8 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(&v21);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v13 = (_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL);
  do
  {
    LOBYTE(v9) = v9 - 1;
    v13 -= 6;
    v22 = 0;
    while ( _interlockedbittestandset64(v10 - 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22, v12, v7);
      while ( *((__int64 *)v10 - 3) < 0 );
    }
    v10 = (volatile signed __int32 *)(v13 - 5);
    *(v13 - 5) = 0LL;
    LOBYTE(v14) = MiIsFreeZeroPfnCold((__int64)(v13 - 5));
    v15 = v21;
    *(v13 - 3) = v21;
    if ( v14 )
      *(v13 - 3) = MiUpdatePageFileHighInPte(v15, 4294967293LL);
    MiSetPfnBlink((__int64)(v13 - 5), 0LL, 1);
    *v13 &= 0xFFFFFFF000000000uLL;
    *((_BYTE *)v13 - 6) = *((_BYTE *)v13 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v13 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0xF) != 0 || !KeShouldYieldProcessor() )
    {
      v12 = 2LL;
    }
    else
    {
      v12 = 2LL;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v12 = 2LL;
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  while ( (unsigned __int64)v10 > v8 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v16 = (unsigned __int64)*(unsigned int *)(a4 + 40) >> 12;
    *(_DWORD *)(a4 + 40) += (_DWORD)v5 << 12;
    v17 = (_QWORD *)(a4 + 48 + 8 * v16);
    do
    {
      *v17++ = v6++;
      --v5;
    }
    while ( v5 );
  }
  return 1LL;
}
