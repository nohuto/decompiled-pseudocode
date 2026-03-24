/*
 * XREFs of iswspace @ 0x140196070
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1408A77BC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408A8BCC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9304 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1401983E8 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
