/*
 * XREFs of MiDecommitRegion @ 0x140606890
 * Callers:
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiFillCommitReturnInfo @ 0x1400576C0 (MiFillCommitReturnInfo.c)
 *     MiVadCommitCrossPartition @ 0x1400576D8 (MiVadCommitCrossPartition.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnProcessCommitment @ 0x140059044 (MiReturnProcessCommitment.c)
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiComputePreferredNode @ 0x1402D1D28 (MiComputePreferredNode.c)
 *     MiEndDpcGang @ 0x1402E8728 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x1402E8814 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rbx
  unsigned __int64 PteAddress; // r14
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 ProcessPartition; // rax
  unsigned __int64 v17; // r8
  unsigned int v18; // eax
  ULONG_PTR v19; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-1A0h]
  _QWORD v21[6]; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v22[38]; // [rsp+70h] [rbp-168h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  v19 = 0LL;
  v20 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  PteAddress = MiGetPteAddress(a3);
  v8 = MiGetPteAddress(a2);
  v9 = *(_DWORD *)(a1 + 48);
  v10 = ((__int64)(PteAddress - v8) >> 3) + 1;
  if ( (v9 & 0x100000) != 0 && (v9 & 0x400000) != 0 )
  {
    v18 = MiComputePreferredNode(a1);
    MiInitializeDpcGang((__int64)v22, v18, 0);
    HIDWORD(v22[13]) |= 0x80u;
    v21[5] = v22;
  }
  MiDecommitPages(a2, PteAddress, (__int64)Process, a1, 1, v21);
  if ( (v22[13] & 0x8000000000LL) != 0 )
  {
    MiStartDpcGang((__int64)v22);
    v21[1] += v22[1];
    MiEndDpcGang((__int64)v22);
  }
  v11 = *(_DWORD *)(a1 + 52);
  v12 = v11;
  v13 = v10 - v21[3];
  LODWORD(v12) = v11 & 0x7FFFFFFF;
  v14 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v13;
  *(_BYTE *)(a1 + 34) = v14 >> 31;
  *(_DWORD *)(a1 + 52) = v11 ^ (v14 ^ v11) & 0x7FFFFFFF;
  if ( !(unsigned int)MiVadCommitCrossPartition(a1) )
  {
    MiFillCommitReturnInfo(v13, (__int64)v21, &v19);
    if ( v19 )
    {
      MiReturnProcessCommitment((__int64)Process, v19);
      if ( (Process[1].DirectoryTableBase & 0x10) != 0 )
        PspChangeJobMemoryUsageByProcess(2LL, -v15, Process);
      if ( Process != PsInitialSystemProcess )
        PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[3], (ULONG_PTR)Process, 2u, v19);
    }
    if ( v20 )
    {
      ProcessPartition = MiGetProcessPartition((__int64)Process);
      MiReturnCommit(ProcessPartition, v17);
    }
  }
}
