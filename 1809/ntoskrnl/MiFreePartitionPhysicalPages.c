/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1408603CC
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x1402D24D4 (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 7120) );
  return result;
}
