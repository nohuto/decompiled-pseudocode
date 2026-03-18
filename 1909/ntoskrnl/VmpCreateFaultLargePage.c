/*
 * XREFs of VmpCreateFaultLargePage @ 0x1408ED414
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x1408ED0B4 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmFreePagesFromMdl @ 0x1400DD350 (MmFreePagesFromMdl.c)
 *     MmGetNodeFastLargePageCounts @ 0x1402D1C90 (MmGetNodeFastLargePageCounts.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpCreateFaultLargePage(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v4; // rdi

  v1 = a1 - 1;
  v2 = 0;
  if ( !MmGetNodeFastLargePageCounts(a1, (int)a1 - 1) )
  {
    PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                0,
                                                -1,
                                                0x200000LL,
                                                0x200000uLL,
                                                1,
                                                v1,
                                                55,
                                                0xFFFFFFFFFFFFFFFFuLL);
    v4 = PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      MmFreePagesFromMdl(PartitionNodePagesForMdl);
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
