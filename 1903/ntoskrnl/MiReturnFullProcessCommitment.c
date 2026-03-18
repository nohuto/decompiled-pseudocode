/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1405EC7B0
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x140899F08 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001F9A0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
