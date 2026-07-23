/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140082770
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiClearContainingMapping @ 0x1400919F4 (MiClearContainingMapping.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiCopySinglePage @ 0x1400EA6A8 (MiCopySinglePage.c)
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     MiConfirmPageIsZero @ 0x1401122E0 (MiConfirmPageIsZero.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14011AB5C (MiRewriteTrimPteAsDemandZero.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14012B3CC (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeImageHeaderPage @ 0x140130778 (MiInitializeImageHeaderPage.c)
 *     MiFlushCacheForAttributeChange @ 0x140138FC8 (MiFlushCacheForAttributeChange.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiComputePageHash @ 0x14015178C (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14015183C (MiGetFileHashPage.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1401530FC (MiMirrorOmitPagesFromCopy.c)
 *     MiReplicatePteChangeToProcess @ 0x140175178 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MiUpdateSystemPdes @ 0x1402A5440 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x1402B67C0 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x1402C9FE0 (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v4; // r8d
  int v6; // eax
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int64 ValidPte; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v12; // r8
  unsigned __int8 CurrentIrql; // dl
  __int64 v16; // rdx
  __int64 v17; // rcx

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
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      _InterlockedOr(SchedulerAssist, 0x10000u);
    }
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal
    || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
        SchedulerAssist = (volatile signed __int32 *)0xFFFFF68000000000LL,
        v12 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        MmInternal[1543] = (unsigned __int64)v12,
        !UltraMapping) )
  {
    UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v12 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  if ( a3 >= 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)v12) )
    {
      if ( (unsigned int)MiPteHasShadow(v17, v16) )
      {
        if ( HIBYTE(word_14043B26C) || (ValidPte & 1) == 0 )
          goto LABEL_31;
LABEL_30:
        ValidPte |= 0x8000000000000000uLL;
LABEL_31:
        *v12 = ValidPte;
        MiWritePteShadow(v12);
        return UltraMapping;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (ValidPte & 1) != 0 )
      {
        goto LABEL_42;
      }
    }
  }
  else if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(SchedulerAssist, 0xFFFFF68000000000uLL) )
    {
      if ( HIBYTE(word_14043B26C) || (ValidPte & 1) == 0 )
        goto LABEL_31;
      goto LABEL_30;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (ValidPte & 1) != 0 )
    {
LABEL_42:
      ValidPte |= 0x8000000000000000uLL;
    }
  }
  *v12 = ValidPte;
  return UltraMapping;
}
