/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140154DDC
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140154D0C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140154DA8 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
    goto LABEL_2;
  if ( *(_QWORD *)a2 != a1 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
    v2 = *(_BYTE *)(a2 + 9);
  }
  if ( (v2 & 2) == 0 )
  {
LABEL_2:
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
