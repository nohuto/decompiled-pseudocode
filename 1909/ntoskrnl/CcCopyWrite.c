/*
 * XREFs of CcCopyWrite @ 0x14027CEF0
 * Callers:
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14006FDB0 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64 *)FileOffset, Length, Wait, (char *)Buffer, 0LL);
}
