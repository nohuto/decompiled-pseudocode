/*
 * XREFs of MiFreeModWriterEntry @ 0x140022C88
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1401807A0 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1402AAFA4 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408530F0 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
