/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1400A8B4C
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x1400A8AAC (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x14017AC20 (MiImageProtoChargedCommit.c)
 *     MiRevertRelocations @ 0x14065A5A4 (MiRevertRelocations.c)
 *     MiPfAllocateMdls @ 0x14066DD10 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14066E540 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x140728F20 (MiDeleteSessionDriverProtos.c)
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
