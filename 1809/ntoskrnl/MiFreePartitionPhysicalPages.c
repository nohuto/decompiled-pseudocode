/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x14086160C
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x1402D27C4 (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 7120) );
  return result;
}
