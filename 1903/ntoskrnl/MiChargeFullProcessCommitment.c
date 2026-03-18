/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140603B80
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1406929BC (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x140899B54 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AB00 (PspChargeQuota.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x140052460 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x140059044 (MiReturnProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1405EC7EC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCommitRequestFailed @ 0x14089846C (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  v2 = 0;
  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1040), a1, 2, a2) >= 0 )
  {
    v2 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v2 = 3;
      if ( (*(_DWORD *)(a1 + 776) & 0x10) == 0 )
      {
LABEL_7:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v9 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)PspChangeJobMemoryUsageByProcess(2LL, a2, a1) )
      {
        v2 = 7;
        goto LABEL_7;
      }
      v9 = 3;
    }
    else
    {
      v9 = 2;
    }
LABEL_13:
    v8 = -1073741523;
    goto LABEL_14;
  }
  v8 = -1073741524;
  v9 = 1;
LABEL_14:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (unsigned __int8)v2 >= 4u )
    PspChangeJobMemoryUsageByProcess(2LL, -(__int64)a2, a1);
  MiCommitRequestFailed(a1, v5, a2, v9);
  return v8;
}
