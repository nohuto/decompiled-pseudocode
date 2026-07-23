/*
 * XREFs of MiDecommitRegion @ 0x1405ED220
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x1405E071C (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x140065D14 (MiReturnProcessCommitment.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiFillCommitReturnInfo @ 0x140068540 (MiFillCommitReturnInfo.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR PteAddress; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 ProcessPartition; // rax
  unsigned __int64 v16; // r8
  __int64 v17[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[6]; // [rsp+40h] [rbp-38h] BYREF

  memset(v18, 0, 0x28uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitPages(a2, PteAddress, (__int64)Process, a1, 1, v18);
  v8 = MiGetPteAddress(a2);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = PteAddress - v8;
  v11 = v9;
  LODWORD(v11) = v9 & 0x7FFFFFFF;
  v12 = (v10 >> 3) - v18[3] + 1;
  v13 = (v11 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v12;
  *(_BYTE *)(a1 + 34) = v13 >> 31;
  *(_DWORD *)(a1 + 52) = v9 ^ (v13 ^ v9) & 0x7FFFFFFF;
  MiFillCommitReturnInfo(v12, (__int64)v18, v17);
  if ( v17[0] )
  {
    MiReturnProcessCommitment((__int64)Process, v17[0]);
    if ( (Process[1].DirectoryTableBase & 0x10) != 0 )
      PspChangeJobMemoryUsageByProcess(2LL, -v14, Process);
    if ( Process != PsInitialSystemProcess )
      PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, 2u, v17[0]);
  }
  if ( v17[1] )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(ProcessPartition, v16);
  }
}
