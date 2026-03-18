/*
 * XREFs of iswspace @ 0x140196050
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1408A77DC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408A8BEC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9324 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1401983C8 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
