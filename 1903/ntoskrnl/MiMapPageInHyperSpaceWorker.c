/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14002DD70
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiBuildMappedCluster @ 0x1400A2B5C (MiBuildMappedCluster.c)
 *     MiCreateSystemPageTable @ 0x1400A3390 (MiCreateSystemPageTable.c)
 *     MiClearContainingMapping @ 0x1400AD570 (MiClearContainingMapping.c)
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400DBFD0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MiMakeProtoTransition @ 0x140115FD0 (MiMakeProtoTransition.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401241C8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     MiInitializeImageHeaderPage @ 0x140131278 (MiInitializeImageHeaderPage.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiConfirmPageIsZero @ 0x140142560 (MiConfirmPageIsZero.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B120 (MiFlushCacheForAttributeChange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140160A28 (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x14016569C (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140169168 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x14017E3A4 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MiUpdateSystemPdes @ 0x1402BC5E4 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x1402CC834 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x1402E4130 (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
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
      if ( HIBYTE(word_140465BEC) || (ValidPte & 1) == 0 )
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
      if ( HIBYTE(word_140465BEC) || (ValidPte & 1) == 0 )
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
