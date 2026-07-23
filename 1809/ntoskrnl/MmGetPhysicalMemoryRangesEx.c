/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x14075C870
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x14075C850 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
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
