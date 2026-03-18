/*
 * XREFs of MiPartitionObjectToPartition @ 0x1400EFBB4
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400EF300 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2D4C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402C2EF8 (MmFreeNonChargedSecurePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1402D1F30 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 *     MmGetPageFileInformation @ 0x1406A4A08 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1407443B4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407828E0 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
      v7 = *(ULONG_PTR **)(qword_140466188
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
