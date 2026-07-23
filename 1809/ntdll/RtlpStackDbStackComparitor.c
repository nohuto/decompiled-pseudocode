/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180116C04
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x180116278 (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
