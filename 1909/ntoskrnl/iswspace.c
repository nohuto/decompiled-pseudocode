/*
 * XREFs of iswspace @ 0x1401A0F80
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1408E4444 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408E579C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408E5ED4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1401A3358 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
