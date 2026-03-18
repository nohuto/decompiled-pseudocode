/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x140154DA8
 * Callers:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140154D0C (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140154DDC (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
