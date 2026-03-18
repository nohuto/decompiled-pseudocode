/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x14013F0A0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x1400DE968 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(unsigned __int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
