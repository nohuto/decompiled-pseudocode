/*
 * XREFs of MiIsSessionMetadata @ 0x14013E790
 * Callers:
 *     MiCombineCandidate @ 0x1400B26D0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8

  return (unsigned int)MiGetSystemRegionType(a1) == 1 && v1 >= qword_140439FC0 && v1 < qword_140439FC0 + 4485120;
}
