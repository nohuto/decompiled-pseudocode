/*
 * XREFs of CmpRemoveKeyHash @ 0x14063A8DC
 * Callers:
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140652328 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRehashKcbSubtree @ 0x14082B484 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x14082B534 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x14063A934 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
