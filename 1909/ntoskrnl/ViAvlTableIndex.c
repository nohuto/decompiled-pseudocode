/*
 * XREFs of ViAvlTableIndex @ 0x140154E6C
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140154D0C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
