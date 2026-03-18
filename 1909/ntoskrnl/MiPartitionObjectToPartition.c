/*
 * XREFs of MiPartitionObjectToPartition @ 0x1400DD2C4
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2AAC (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402C2C58 (MmFreeNonChargedSecurePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1402D1C90 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     MmGetPageFileInformation @ 0x140673FCC (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1407462B4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140784BB0 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  ULONG_PTR *v7; // r10
  ULONG_PTR v9; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v7 = *(ULONG_PTR **)(qword_140465E88
                         + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
    }
    else
    {
      v7 = *BugCheckParameter2;
      v6 = 1;
    }
  }
  else
  {
    v7 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_15;
  if ( v6 != 1 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v7[21] != BugCheckParameter2 )
LABEL_15:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  if ( PsReferencePartitionSafe((__int64)BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v9, (ULONG_PTR)v7, BugCheckParameter4);
    v7 = (ULONG_PTR *)BugCheckParameter4;
  }
LABEL_5:
  *a3 = BugCheckParameter4;
  return v7;
}
