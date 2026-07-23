/*
 * XREFs of FsFilterCtrlFree @ 0x14001C628
 * Callers:
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x1408160BC (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x140270748 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack(a1);
  return result;
}
