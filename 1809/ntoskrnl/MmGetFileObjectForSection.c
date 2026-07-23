/*
 * XREFs of MmGetFileObjectForSection @ 0x14061C2B0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140092480 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
