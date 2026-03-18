/*
 * XREFs of iswspace @ 0x1401A0860
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1408E4B3C (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408E65CC (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
