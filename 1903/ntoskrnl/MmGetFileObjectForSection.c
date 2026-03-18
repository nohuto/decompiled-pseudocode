/*
 * XREFs of MmGetFileObjectForSection @ 0x14068A83C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400E1DB0 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
