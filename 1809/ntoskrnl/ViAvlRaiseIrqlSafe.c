/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1400F5880
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1400F5758 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14093F0D8 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

void __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
}
