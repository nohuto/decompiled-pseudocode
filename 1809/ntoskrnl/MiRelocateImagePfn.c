/*
 * XREFs of MiRelocateImagePfn @ 0x1405E0930
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
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
 *     MiPerformFixups @ 0x1405E0B58 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  ULONG_PTR v8; // r14
  _QWORD *v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  ULONG_PTR v14; // r13
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // [rsp+70h] [rbp+8h]

  v8 = a2;
  v10 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  if ( (unsigned __int64)a3 >= v10[7] )
    return 1LL;
  v11 = 0;
  while ( !*(_QWORD *)(*v10 + 8LL * (v11 + a3)) )
  {
    v12 = v10[11];
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 8LL * (v11 + a3) + 56) )
        break;
    }
    if ( ++v11 )
      return 1LL;
  }
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v14 = 0LL;
    v20 = 0LL;
    goto LABEL_13;
  }
  v20 = a2;
  v14 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  if ( v14 )
  {
LABEL_11:
    v8 = (__int64)(v14 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x58000000000LL);
    MiMakeValidPte(v14, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( !MiPteInShadowRange(v14) )
    {
LABEL_12:
      *(_QWORD *)v14 = v16;
      goto LABEL_13;
    }
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
      }
      goto LABEL_12;
    }
    if ( !HIBYTE(word_14043B26C) && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    *(_QWORD *)v14 = v16;
    MiWritePteShadow(v14, v16);
LABEL_13:
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)v10[1] == CurrentThread )
    {
      CurrentThread = 0LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 3), 0LL);
    }
    v18 = 0LL;
    if ( a5 )
      v18 = v10[5];
    MiPerformFixups(v8, BugCheckParameter2, v18, a7);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v10 + 3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10 + 3);
      KeAbPostRelease((ULONG_PTR)(v10 + 3));
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( !v14 )
      return 0LL;
    if ( v14 != v20 )
    {
      MiReleasePtes((__int64)&qword_14043C060, v14, 1u);
      return 0LL;
    }
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_14043B26C) && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
        *(_QWORD *)v14 = v19;
        MiWritePteShadow(v14, v19);
        goto LABEL_50;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v19 & 1) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = v19;
LABEL_50:
    KeFlushSingleTb(v8, 0, 1u);
    return 0LL;
  }
  if ( v8 )
  {
    v14 = v8;
    goto LABEL_11;
  }
  return 3221225626LL;
}
