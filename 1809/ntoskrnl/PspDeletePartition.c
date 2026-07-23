/*
 * XREFs of PspDeletePartition @ 0x14088E650
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PspRemovePartitionFromGlobalList @ 0x1402EBFC4 (PspRemovePartitionFromGlobalList.c)
 */

__int64 __fastcall PspDeletePartition(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    return PspRemovePartitionFromGlobalList(BugCheckParameter2);
  return result;
}
