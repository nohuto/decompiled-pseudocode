/*
 * XREFs of MiIsSessionMetadata @ 0x140142D40
 * Callers:
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8

  return (unsigned int)MiGetSystemRegionType(a1) == 1 && v1 >= qword_1404656D8 && v1 < qword_1404656D8 + 290816;
}
