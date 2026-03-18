/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x140784BB0
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x140784B90 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1400DD2C4 (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074630C (MiGetPhysicalMemoryRanges.c)
 */

ULONG_PTR *__fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v2; // rbx
  _QWORD *PhysicalMemoryRanges; // rdi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = MiPartitionObjectToPartition(a1, 0, &v4);
  v2 = result;
  if ( result )
  {
    PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(result, 0);
    if ( v4 )
      PsDereferencePartition(v2[21]);
    return PhysicalMemoryRanges;
  }
  return result;
}
