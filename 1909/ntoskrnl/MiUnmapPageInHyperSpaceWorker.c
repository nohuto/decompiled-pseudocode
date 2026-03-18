/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140026E50
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C720 (MiDecrementAndInsertStandbyPages.c)
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
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x14017E888 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
      if ( HIBYTE(word_1404658EC) || (v13 & 1) == 0 )
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
  if ( HIBYTE(word_1404658EC) || (v13 & 1) == 0 )
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
