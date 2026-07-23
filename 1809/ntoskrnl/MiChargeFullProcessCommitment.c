/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1405E1510
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x14067B2BC (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14004D1C0 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x14004D3A0 (PspChargeQuota.c)
 *     MiReturnProcessCommitment @ 0x140065D14 (MiReturnProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1405F39D4 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCommitRequestFailed @ 0x14085CB3C (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(__int64 a1, unsigned __int64 a2)
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
      if ( (*(_DWORD *)(a1 + 768) & 0x10) == 0 )
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
