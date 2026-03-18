/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140605690
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1402CF5E0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x140685F2C (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x140052500 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x1400590E4 (MiReturnProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1405ECFBC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B15F0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCommitRequestFailed @ 0x140897C8C (MiCommitRequestFailed.c)
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
