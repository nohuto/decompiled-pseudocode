/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1400960CC
 * Callers:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x14009602C (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x14017B310 (MiImageProtoChargedCommit.c)
 *     MiRevertRelocations @ 0x14064325C (MiRevertRelocations.c)
 *     MiPfAllocateMdls @ 0x140647770 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140647FA0 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x14072A290 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionDriverProtos(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
