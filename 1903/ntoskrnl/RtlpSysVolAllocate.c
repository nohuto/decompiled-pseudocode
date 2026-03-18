/*
 * XREFs of RtlpSysVolAllocate @ 0x1408D46CC
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D4410 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpSysVolAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x536C6F56u);
}
