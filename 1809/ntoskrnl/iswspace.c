/*
 * XREFs of iswspace @ 0x1401961B0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1408A8A1C (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408AA564 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x140198528 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
