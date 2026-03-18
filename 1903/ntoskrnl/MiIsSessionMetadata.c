/*
 * XREFs of MiIsSessionMetadata @ 0x140142800
 * Callers:
 *     MiCombineCandidate @ 0x1401400F0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8

  return (unsigned int)MiGetSystemRegionType(a1) == 1 && v1 >= qword_1404659D8 && v1 < qword_1404659D8 + 290816;
}
