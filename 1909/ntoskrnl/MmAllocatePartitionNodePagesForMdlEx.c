/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1400DC9B0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x14019D7E0 (MmAllocateNodePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x140285908 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     VmpCreateFaultLargePage @ 0x1408ED414 (VmpCreateFaultLargePage.c)
 *     KiComputeNumaCosts @ 0x1409FE9FC (KiComputeNumaCosts.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     MiPartitionObjectToPartition @ 0x1400DD2C4 (MiPartitionObjectToPartition.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 PagesForMdl; // rbx

  v9 = a3;
  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) != 0 && ((v13 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  v14 = MiPartitionObjectToPartition(BugCheckParameter2);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  PagesForMdl = MiAllocatePagesForMdl(v14, a1, a2, v9, a4, v12, a6, v13);
  if ( (_BYTE)a6 )
    PsDereferencePartition(*(_QWORD *)(v15 + 168));
  return PagesForMdl;
}
