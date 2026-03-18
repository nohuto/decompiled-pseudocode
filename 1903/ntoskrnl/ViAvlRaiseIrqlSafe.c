/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x140154794
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14015466C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
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
