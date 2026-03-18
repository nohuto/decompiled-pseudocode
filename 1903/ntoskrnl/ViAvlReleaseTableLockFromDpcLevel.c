/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x140154708
 * Callers:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14015466C (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14015473C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rcx

  v2 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
}
