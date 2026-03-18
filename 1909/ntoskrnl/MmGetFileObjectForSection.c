/*
 * XREFs of MmGetFileObjectForSection @ 0x14065095C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400C1C30 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
