/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x1406DC044
 * Callers:
 *     PfpMemoryRangesQuery @ 0x140141A80 (PfpMemoryRangesQuery.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 */

ULONG_PTR *__fastcall MmGetPhysicalMemoryRangesEx2(__int64 a1, unsigned int a2)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v4; // rbx
  __int64 PhysicalMemoryRanges; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  result = MiPartitionObjectToPartition(0LL, 0, &v6);
  v4 = result;
  if ( result )
  {
    PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(result, a2);
    if ( (_BYTE)v6 )
      PsDereferencePartition(v4[21]);
    return (ULONG_PTR *)PhysicalMemoryRanges;
  }
  return result;
}
