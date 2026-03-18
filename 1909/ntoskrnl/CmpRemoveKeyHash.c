/*
 * XREFs of CmpRemoveKeyHash @ 0x14063D96C
 * Callers:
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140665428 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRehashKcbSubtree @ 0x14082AB84 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x14082AC34 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x14063D9C4 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1640)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
