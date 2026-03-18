/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14002E160
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x140074BE8 (KiInSwapProcesses.c)
 *     MiInitializeImageHeaderPage @ 0x14008E4F4 (MiInitializeImageHeaderPage.c)
 *     MiClearContainingMapping @ 0x14008EE80 (MiClearContainingMapping.c)
 *     MiCreateSystemPageTable @ 0x1400961C0 (MiCreateSystemPageTable.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400BBE50 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiCopySinglePage @ 0x1400C7A2C (MiCopySinglePage.c)
 *     MiBuildMappedCluster @ 0x1400C9B8C (MiBuildMappedCluster.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     MiMakeProtoTransition @ 0x140117660 (MiMakeProtoTransition.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140124E48 (MiReadWriteAnyLevelShadowPte.c)
 *     MiFillPhysicalPages @ 0x14012C484 (MiFillPhysicalPages.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiConfirmPageIsZero @ 0x140142AA0 (MiConfirmPageIsZero.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B7C0 (MiFlushCacheForAttributeChange.c)
 *     MiComputePageHash @ 0x1401650EC (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14016A5FC (MiMirrorOmitPagesFromCopy.c)
 *     MiReplicatePteChangeToProcess @ 0x14017EA94 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiUpdateSystemPdes @ 0x1402BC344 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x1402CC594 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x1402CCD08 (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x1402E3E90 (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v4; // r8d
  int v6; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v11; // r8
  BOOL v12; // eax
  __int64 v13; // rcx
  unsigned __int64 *v14; // r8
  __int64 v15; // r11
  unsigned __int8 CurrentIrql; // dl

  v4 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v4 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v6 = a3 & 3;
    if ( v6 == 2 )
    {
      v4 |= 0x2000000u;
LABEL_17:
      v4 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( v6 && v6 != 3 )
  {
    if ( v6 != 2 )
      goto LABEL_8;
    goto LABEL_17;
  }
  v4 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v4 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal
    || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
        v11 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        MmInternal[1543] = v11,
        !UltraMapping) )
  {
    v11 = (((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
           + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
  }
  v12 = MiPteInShadowRange(v11);
  if ( a3 >= 0 )
  {
    if ( !v12 )
      goto LABEL_13;
    if ( (unsigned int)MiPteHasShadow(v13) )
    {
      if ( HIBYTE(word_1404658EC) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v14 = ValidPte;
      MiWritePteShadow(v14, ValidPte);
      return v15;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_13;
    }
LABEL_40:
    ValidPte |= 0x8000000000000000uLL;
    goto LABEL_13;
  }
  if ( v12 )
  {
    if ( (unsigned int)MiPteHasShadow(v13) )
    {
      if ( HIBYTE(word_1404658EC) || (ValidPte & 1) == 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_13;
    }
    goto LABEL_40;
  }
LABEL_13:
  *v14 = ValidPte;
  return v15;
}
