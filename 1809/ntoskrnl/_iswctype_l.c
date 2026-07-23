/*
 * XREFs of _iswctype_l @ 0x1401984F8
 * Callers:
 *     wcstoxlX @ 0x140197B7C (wcstoxlX.c)
 *     wcstoxq @ 0x140198288 (wcstoxq.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
