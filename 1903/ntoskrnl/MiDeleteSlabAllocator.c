/*
 * XREFs of MiDeleteSlabAllocator @ 0x1402DB8C0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x1402DBBD0 (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiFreeSlabEntries(a1, a2, 1LL);
  return 0LL;
}
