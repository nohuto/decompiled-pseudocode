/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x140010EE0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x140192E30 (MmAllocateNodePagesForMdlEx.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
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
