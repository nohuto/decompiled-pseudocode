/*
 * XREFs of MiFreeModWriterEntry @ 0x1400BF8C8
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14018CF20 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1402C3914 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14088C600 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1400BF904 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
