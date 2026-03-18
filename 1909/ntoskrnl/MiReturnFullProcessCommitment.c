/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1405ECF80
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x140899728 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001FD90 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
