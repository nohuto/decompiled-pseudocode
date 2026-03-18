/*
 * XREFs of CmpDiscardKcb @ 0x14063A964
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F7DE0 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x140728070 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140832F20 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1408332B0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14083C640 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083D034 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083D32C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14063A8DC (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063AA0C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14063AAD8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14065242C (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v1 )
  {
    v8 = v1[3];
    if ( v8 )
    {
      v9 = *v1;
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v11 = (_QWORD *)v1[1], (_QWORD *)*v11 != v1) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 192) + 24LL) = 0LL;
      CmpDelayDerefKeyControlBlock(v10);
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  ++*(_QWORD *)(BugCheckParameter4 + 304);
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x20000u;
  *(_WORD *)(BugCheckParameter4 + 66) = 0;
  CmpRemoveKeyHash(v3, (_DWORD *)(BugCheckParameter4 + 16));
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  v5 = *(_QWORD *)(v4 + 1656);
  v6 = 3
     * ((unsigned int)(*(_DWORD *)(v4 + 1664) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 24) = *(_QWORD *)(v5
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v4 + 1664) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v5 + 8 * v6 + 16) = BugCheckParameter4 + 16;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
