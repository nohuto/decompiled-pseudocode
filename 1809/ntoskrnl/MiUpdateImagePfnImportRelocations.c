/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x1401B52EC
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUpdateRetpolineImportFixups @ 0x1401B582C (MiUpdateRetpolineImportFixups.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *v5; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // rcx
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // r12
  int ProtectionPfnCompatible; // eax
  int v15; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v17; // r14
  __int64 v18; // rdx
  int v19; // r8d

  v5 = 0LL;
  v7 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    v10 = *(_WORD **)(v9 + 8LL * a3 + 56);
    if ( v10 )
    {
      if ( *v10 || v10[3] == 3 )
      {
        if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v11 = 0LL;
          v12 = 0LL;
          goto LABEL_22;
        }
        v12 = a2;
        v11 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
        if ( !v11 )
        {
          if ( !v7 )
            return 3221225626LL;
          v11 = v7;
        }
        v7 = (__int64)(v11 << 25) >> 16;
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x58000000000LL);
        MiMakeValidPte(v11, a4, ProtectionPfnCompatible | 0xA0000000);
        if ( MiPteInShadowRange(v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v15 = 1;
            if ( HIBYTE(word_14043B26C) == (_BYTE)v5 )
            {
LABEL_18:
              if ( (a2 & 1) != 0 )
                a2 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            goto LABEL_18;
          }
        }
        *(_QWORD *)v11 = a2;
        if ( v15 )
        {
          MiWritePteShadow(v11, a2);
          v5 = 0LL;
        }
LABEL_22:
        CurrentThread = KeGetCurrentThread();
        v17 = (signed __int64 *)(v8 + 24);
        if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
        {
          CurrentThread = v5;
        }
        else
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx(v8 + 24, 0LL);
        }
        MiUpdateRetpolineImportFixups(v7, a2, *(_QWORD *)(v8 + 88), a3);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v17);
          KeAbPostRelease((ULONG_PTR)v17);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( !v11 )
          return 0LL;
        if ( v11 != v12 )
        {
          MiReleasePtes((__int64)&qword_14043C060, v11, 1u);
          return 0LL;
        }
        if ( MiPteInShadowRange(v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v19 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
LABEL_37:
              if ( (v18 & 1) != 0 )
                v18 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            goto LABEL_37;
          }
        }
        *(_QWORD *)v11 = v18;
        if ( v19 )
          MiWritePteShadow(v11, v18);
        KeFlushSingleTb(v7, 0, 1u);
        return 0LL;
      }
    }
  }
  return 1LL;
}
