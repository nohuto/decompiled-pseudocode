/*
 * XREFs of CmpMarkKeyUnbacked @ 0x1405AA8A0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E1330 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1407F9A80 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407F9FE0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x140803260 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140803798 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140803AA4 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x1405D432C (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = 1;
  ++*(_QWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 32) = -1;
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_BYTE *)(v3 + 57) != 3 )
    v1 = 0;
  *(_BYTE *)(a1 + 57) = v1;
  result = CmpCleanUpKcbValueCache(a1);
  *(_WORD *)(a1 + 178) &= 4u;
  *(_DWORD *)(a1 + 176) &= 0xFFFFFF00;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 177) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
