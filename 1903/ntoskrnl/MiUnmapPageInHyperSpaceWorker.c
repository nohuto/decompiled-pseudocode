/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140026A60
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C330 (MiDecrementAndInsertStandbyPages.c)
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
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x14017E198 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14
  _QWORD *MmInternal; // r11
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 *v11; // r9
  __int64 v12; // r11
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  struct _KPRCB *v16; // rcx

  v3 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v7 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v6 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  result = MiPteInShadowRange(
             ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             a2,
             a3,
             ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = ZeroPte;
  if ( v14 < 0 )
  {
    if ( !(_DWORD)result )
    {
LABEL_5:
      *v11 = v13;
      goto LABEL_6;
    }
    if ( (unsigned int)MiPteHasShadow(v10) )
    {
      if ( HIBYTE(word_140465BEC) || (v13 & 1) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    result = (__int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) == 0 || (v13 & 1) == 0 )
      goto LABEL_5;
LABEL_26:
    result = 0x8000000000000000uLL;
    v13 |= 0x8000000000000000uLL;
    goto LABEL_5;
  }
  if ( !(_DWORD)result )
    goto LABEL_5;
  if ( !(unsigned int)MiPteHasShadow(v10) )
  {
    result = (__int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) == 0 || (v13 & 1) == 0 )
      goto LABEL_5;
    goto LABEL_26;
  }
  if ( HIBYTE(word_140465BEC) || (v13 & 1) == 0 )
    goto LABEL_15;
LABEL_14:
  v13 |= 0x8000000000000000uLL;
LABEL_15:
  *v11 = v13;
  result = MiWritePteShadow(v11, v13);
LABEL_6:
  if ( !v12 )
  {
    v15 = v6 == 64;
    if ( v6 == 64 )
    {
      MiFlushHyperSpace();
      v15 = 1;
    }
    if ( !v15 )
      v5 = v6;
    result = v7 | v5;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( v3 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
