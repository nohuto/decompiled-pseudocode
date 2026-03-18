/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x140889A90
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x1402EB3D4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 */

void __fastcall MiReleasePartitionHugeIoSpace(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned int i; // ebx
  ULONG_PTR v5; // r9
  void *v6; // rcx

  v2 = BugCheckParameter2[890] << 18;
  v3 = **(_QWORD **)(BugCheckParameter2[21] + 56LL);
  if ( v2 )
  {
    for ( i = 0;
          i < (unsigned __int16)KeNumberNodes;
          MiAllocatePartitionPhysicalPages((_DWORD)BugCheckParameter2, v3, v2, i++, 769) )
    {
      ;
    }
  }
  v5 = BugCheckParameter2[52];
  if ( v5 )
    KeBugCheckEx(0x1Au, 0x30000003uLL, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter2[890]);
  v6 = (void *)BugCheckParameter2[889];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
