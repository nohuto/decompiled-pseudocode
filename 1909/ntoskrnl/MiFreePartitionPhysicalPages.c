/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x14089C078
 * Callers:
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x1402EB134 (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(ULONG_PTR a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 7888) );
  return result;
}
