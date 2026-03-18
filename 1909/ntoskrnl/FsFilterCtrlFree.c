/*
 * XREFs of FsFilterCtrlFree @ 0x140009E38
 * Callers:
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x14084E03C (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x140283F98 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
