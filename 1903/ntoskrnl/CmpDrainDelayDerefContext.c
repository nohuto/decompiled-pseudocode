/*
 * XREFs of CmpDrainDelayDerefContext @ 0x140045A40
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14069B610 (CmpCleanUpKCBCacheTable.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmpUnfreezeHive @ 0x14082AE40 (CmpUnfreezeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408334DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x14064EB24 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C6B20 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  ULONG_PTR v7; // r15
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      v2[1] = v2;
      *v2 = v2;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}
