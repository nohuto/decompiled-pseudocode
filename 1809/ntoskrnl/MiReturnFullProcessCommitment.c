/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1405F2998
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084410 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8390 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9894 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x14085D394 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14007FF10 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
