/*
 * XREFs of MiRelocateImagePfn @ 0x140605680
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
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
 *     MiPerformFixups @ 0x14065A690 (MiPerformFixups.c)
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
  ULONG_PTR v8; // rbp
  _QWORD *v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  ULONG_PTR v14; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // r12
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
    v12 = v10[12];
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
    goto LABEL_14;
  }
  v20 = a2;
  v14 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
  if ( v14 )
  {
LABEL_12:
    v8 = (__int64)(v14 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x58000000000LL);
    MiMakeValidPte(v14, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( !MiPteInShadowRange(v14) )
    {
LABEL_13:
      *(_QWORD *)v14 = v16;
      goto LABEL_14;
    }
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
      }
      goto LABEL_13;
    }
    if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    *(_QWORD *)v14 = v16;
    MiWritePteShadow(v14);
LABEL_14:
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
      MiReleasePtes((__int64)&qword_1404669C0, v14, 1u);
      return 0LL;
    }
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140465BEC) && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
        *(_QWORD *)v14 = v19;
        MiWritePteShadow(v14);
        goto LABEL_49;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v19 & 1) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = v19;
LABEL_49:
    KeFlushSingleTb(v8, 0, 1u);
    return 0LL;
  }
  if ( v8 )
  {
    v14 = v8;
    goto LABEL_12;
  }
  return 3221225626LL;
}
