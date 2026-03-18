/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x1402844A0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x1400A78B8 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(unsigned __int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
