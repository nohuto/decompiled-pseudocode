/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140091A00
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiProbeLockFrame @ 0x14008F080 (MiProbeLockFrame.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400A6290 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiReturnPfnReferenceCount @ 0x1400FCE8C (MiReturnPfnReferenceCount.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiLockProtoPage @ 0x140102454 (MiLockProtoPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135268 (MiUnlockNestedProtoPoolPage.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMirrorPerformBrownWrites @ 0x14015FB5C (MiMirrorPerformBrownWrites.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140199920 (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x1402C4B38 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x1402E4130 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402E4CAC (MiLockDownWorkingSet.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140054CE0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiIsPfnSystemCharged @ 0x140091B9C (MiIsPfnSystemCharged.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bx
  __int16 v6; // bx
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  int v11; // ebp
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // r11

  v4 = *(_WORD *)(a1 + 32);
  if ( !v4 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v6 = v4 - 1;
  *(_WORD *)(a1 + 32) = v6;
  if ( !v6 && (unsigned int)MiIsPfnFileOnly(a1, a2, a3, a4) )
    goto LABEL_26;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( !v7 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
        return 0LL;
    }
    else if ( v6 != 2 || !v7 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      return 0LL;
    }
  }
  if ( (unsigned int)MiIsPfnSystemCharged(a1) )
  {
    *(_BYTE *)(a1 + 35) &= ~0x20u;
  }
  else
  {
    v11 = 0;
    if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (unsigned int)MiIsPfnCommitNotCharged(v9)
      || !v6 && (v14 & 0x4000000000000000LL) != 0 )
    {
      v11 = 1;
    }
    v12 = (v10 >> 40) & 0x3FF;
    v13 = *(_QWORD *)(qword_140466188 + 8 * v12);
    if ( v11 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140466188 + 8 * v12), 1uLL);
    if ( (ULONG_PTR *)v13 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 8128), 1uLL);
  }
  if ( v6 )
    return 0LL;
LABEL_26:
  MiPfnReferenceCountIsZero(a1, (__int64)(a1 + 0x58000000000LL) / 48);
  return 1LL;
}
