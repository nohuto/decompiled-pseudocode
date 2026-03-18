/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x14001B7BC
 * Callers:
 *     MiComputeImagePteIndex @ 0x14001B70C (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     MiIdentifyPfn @ 0x1400A7EC0 (MiIdentifyPfn.c)
 *     MiImageProtoChargedCommit @ 0x14016AF10 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiAddMappedPtes @ 0x1405DF500 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x1406538AC (MiRevertRelocations.c)
 *     MiPfAllocateMdls @ 0x1406982C0 (MiPfAllocateMdls.c)
 *     MiDeleteSessionDriverProtos @ 0x1406E1A78 (MiDeleteSessionDriverProtos.c)
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
