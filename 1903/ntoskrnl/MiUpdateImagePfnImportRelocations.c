/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x140155448
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUpdateRetpolineImportFixups @ 0x140155624 (MiUpdateRetpolineImportFixups.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *v5; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // rcx
  unsigned __int64 v11; // r12
  ULONG_PTR v12; // rbx
  int ProtectionPfnCompatible; // eax
  int v14; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v16; // r14
  __int64 v18; // rdx
  int v19; // r8d

  v5 = 0LL;
  v7 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  v9 = *(_QWORD *)(v8 + 96);
  if ( !v9 )
    return 1LL;
  v10 = *(_WORD **)(v9 + 8LL * a3 + 56);
  if ( !v10 || !*v10 && v10[3] != 3 )
    return 1LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v12 = 0LL;
    v11 = 0LL;
    goto LABEL_11;
  }
  v11 = a2;
  v12 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
  if ( v12 )
  {
LABEL_8:
    v7 = (__int64)(v12 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x58000000000LL);
    MiMakeValidPte(v12, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( !MiPteInShadowRange(v12) )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140465BEC) == (_BYTE)v5 )
      {
LABEL_31:
        if ( (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_31;
    }
LABEL_9:
    *(_QWORD *)v12 = a2;
    if ( v14 )
    {
      MiWritePteShadow(v12);
      v5 = 0LL;
    }
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    v16 = (signed __int64 *)(v8 + 24);
    if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    {
      CurrentThread = v5;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v8 + 24, 0LL);
    }
    MiUpdateRetpolineImportFixups(v7, a2, *(_QWORD *)(v8 + 96), a3);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( !v12 )
      return 0LL;
    if ( v12 != v11 )
    {
      MiReleasePtes((__int64)&qword_1404669C0, v12, 1u);
      return 0LL;
    }
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_41;
LABEL_39:
        if ( (v18 & 1) != 0 )
          v18 |= 0x8000000000000000uLL;
        goto LABEL_41;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        goto LABEL_39;
    }
LABEL_41:
    *(_QWORD *)v12 = v18;
    if ( v19 )
      MiWritePteShadow(v12);
    KeFlushSingleTb(v7, 0, 1u);
    return 0LL;
  }
  if ( v7 )
  {
    v12 = v7;
    goto LABEL_8;
  }
  return 3221225626LL;
}
