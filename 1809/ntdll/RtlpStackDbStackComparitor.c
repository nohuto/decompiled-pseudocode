/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180116C68
 * Callers:
 *     RtlStackDbStackAdd @ 0x1801158F0 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x1801162DC (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
