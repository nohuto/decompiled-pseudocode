/*
 * XREFs of CcCopyWrite @ 0x140269940
 * Callers:
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1400312D0 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64 *)FileOffset, Length, Wait, (__int64)Buffer, 0LL);
}
