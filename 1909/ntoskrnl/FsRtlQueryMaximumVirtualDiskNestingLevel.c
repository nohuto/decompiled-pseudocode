/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140175F90
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     FsRtlpGetMaxVirtualDiskNestingLevel @ 0x14019C550 (FsRtlpGetMaxVirtualDiskNestingLevel.c)
 */

ULONG FsRtlQueryMaximumVirtualDiskNestingLevel(void)
{
  ULONG result; // eax

  result = FsRtlVirtualDiskMaxTreeDepth;
  if ( FsRtlVirtualDiskMaxTreeDepth == -1 )
  {
    result = FsRtlpGetMaxVirtualDiskNestingLevel();
    FsRtlVirtualDiskMaxTreeDepth = result;
  }
  return result;
}
