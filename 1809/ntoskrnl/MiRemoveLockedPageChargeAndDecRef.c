/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140030B20
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002CB18 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiInitializeImageProtos @ 0x140093198 (MiInitializeImageProtos.c)
 *     MiLockProtoPage @ 0x1400962A4 (MiLockProtoPage.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x140125E20 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DD90 (MiFinalizeImageHeaderPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013489C (MiUnlockNestedProtoPoolPage.c)
 *     MiDeletePerSessionProtos @ 0x140136F84 (MiDeletePerSessionProtos.c)
 *     MiUnlockPagedAddress @ 0x14013A2A8 (MiUnlockPagedAddress.c)
 *     MiReturnPfnReferenceCount @ 0x14013B790 (MiReturnPfnReferenceCount.c)
 *     MiMirrorPerformBrownWrites @ 0x140152374 (MiMirrorPerformBrownWrites.c)
 *     MiJumpStackTarget @ 0x14015E8F0 (MiJumpStackTarget.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14018F9A4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5434 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMakeImagePageOk @ 0x1402C44FC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x1402C9CF0 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402CA860 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14009CA20 (MiIsPfnFileOnly.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int16 v1; // bx
  __int16 v3; // bx
  unsigned __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v6; // rcx
  char v7; // al
  unsigned __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  signed __int32 v14; // eax

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 - 1;
  *(_WORD *)(a1 + 32) = v3;
  if ( !v3 && (unsigned int)MiIsPfnFileOnly() )
    goto LABEL_22;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) )
    return 0LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFF68000000000LL;
  v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v6 > 0xFFFFF6BFFFFFFF78uLL || v6 < 0xFFFFF68000000000uLL )
  {
    v7 = *(_BYTE *)(a1 + 35);
    if ( (v7 & 0x20) != 0 )
    {
      *(_BYTE *)(a1 + 35) = v7 & 0xDF;
      goto LABEL_15;
    }
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( (v8 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1, 0x8000000000000000uLL)
    || !v3 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v9 = 1;
  }
  v10 = (v8 >> 40) & 0x3FF;
  v11 = *(_QWORD *)(qword_14043A748 + 8 * v10);
  if ( v9 == 1 )
    MiReturnCommit(*(_QWORD *)(qword_14043A748 + 8 * v10), 1LL);
  if ( (ULONG_PTR *)v11 != &MiSystemPartition )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7360), 1uLL);
    goto LABEL_15;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 1LL;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
  {
LABEL_26:
    v4 = _InterlockedExchangeAdd64(&qword_14043E600, v4);
    goto LABEL_15;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_23:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    goto LABEL_26;
  }
  while ( 1 )
  {
    v14 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v13 = (_DWORD)CachedResidentAvailable == v14;
    LODWORD(CachedResidentAvailable) = v14;
    if ( v13 )
      break;
    if ( v14 == -1 || (unsigned __int64)(v14 + 1LL) > 0x100 )
      goto LABEL_23;
  }
LABEL_15:
  if ( v3 )
    return 0LL;
LABEL_22:
  MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48, CurrentPrcb, v4);
  return 1LL;
}
