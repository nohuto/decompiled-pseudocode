/*
 * XREFs of MiFreeModWriterEntry @ 0x1400DFA48
 * Callers:
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14018C6A0 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1402C3BB4 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14088CDE0 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1400DFA84 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
