/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14003AB00
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiClearContainingMapping @ 0x1400919F4 (MiClearContainingMapping.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
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
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x140176054 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v5; // ebx
  __int64 *v6; // r9
  unsigned int v7; // ebp
  unsigned __int64 v8; // r14
  _QWORD *MmInternal; // r11
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v13; // rcx
  bool v14; // zf
  struct _KPRCB *v15; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = 0;
  v8 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v8 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v7 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  v10 = ZeroPte;
  if ( (int)a3 < 0 )
  {
    result = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(a1, ZeroPte) )
        {
          if ( HIBYTE(word_14043B26C) || (v10 & 1) == 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) != 0 && (v10 & 1) != 0 )
        {
LABEL_29:
          result = 0x8000000000000000uLL;
          v10 |= 0x8000000000000000uLL;
        }
      }
    }
LABEL_5:
    *v6 = v10;
    goto LABEL_6;
  }
  result = MiPteInShadowRange(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, a3);
  if ( !(_DWORD)result )
    goto LABEL_5;
  if ( !(unsigned int)MiPteHasShadow(v13, v10) )
  {
    result = (__int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) == 0 || (v10 & 1) == 0 )
      goto LABEL_5;
    goto LABEL_29;
  }
  if ( HIBYTE(word_14043B26C) || (v10 & 1) == 0 )
    goto LABEL_18;
LABEL_17:
  v10 |= 0x8000000000000000uLL;
LABEL_18:
  *v6 = v10;
  result = MiWritePteShadow(v6);
LABEL_6:
  if ( !MmInternal )
  {
    v14 = v7 == 64;
    if ( v7 == 64 )
    {
      MiFlushHyperSpace();
      v14 = 1;
    }
    if ( !v14 )
      v5 = v7;
    result = v8 | v5;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( a2 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v15);
    }
    result = a2;
    __writecr8(a2);
  }
  return result;
}
