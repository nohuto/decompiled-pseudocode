/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x140284200
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x140094E58 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(unsigned __int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
