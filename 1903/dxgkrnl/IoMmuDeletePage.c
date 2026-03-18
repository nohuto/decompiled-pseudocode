/*
 * XREFs of IoMmuDeletePage @ 0x1C0024AF4
 * Callers:
 *     IoMmuDeleteTreeNode @ 0x1C004FF24 (IoMmuDeleteTreeNode.c)
 *     IoMmuUpdatePfn @ 0x1C0050464 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuDeletePage(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
