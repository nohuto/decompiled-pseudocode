/*
 * XREFs of CmpDiscardKcb @ 0x1405AB6A8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E25B0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1407FAC60 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407FB1C0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x140804440 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140804978 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1405AB748 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1405AB814 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpRemoveKeyHash @ 0x1406A1308 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 184);
  if ( v1 )
  {
    v8 = v1[3];
    if ( v8 )
    {
      v9 = *v1;
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD **)(*v1 + 8LL) != v1
        || (v11 = (_QWORD *)v1[1], (_QWORD *)*v11 != v1)
        || (*v11 = v9,
            *(_QWORD *)(v9 + 8) = v11,
            v12 = *(__int64 **)(BugCheckParameter4 + 184),
            v13 = *(_QWORD *)(v10 + 184) + 48LL,
            v14 = *(__int64 ***)(*(_QWORD *)(v10 + 184) + 56LL),
            *v14 != (__int64 *)v13) )
      {
        __fastfail(3u);
      }
      *v12 = v13;
      v12[1] = (__int64)v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  ++*(_QWORD *)(BugCheckParameter4 + 296);
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  CmpRemoveKeyHash(v3, BugCheckParameter4 + 8);
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 24);
  v5 = *(_QWORD *)(v4 + 1656);
  v6 = 3
     * ((unsigned int)(*(_DWORD *)(v4 + 1664) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 16) = *(_QWORD *)(v5
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v4 + 1664) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v5 + 8 * v6 + 16) = BugCheckParameter4 + 8;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
