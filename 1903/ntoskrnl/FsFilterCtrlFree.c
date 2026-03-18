/*
 * XREFs of FsFilterCtrlFree @ 0x140009DA8
 * Callers:
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5810 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x14084E93C (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x140284238 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
