/*
 * XREFs of _iswctype_l @ 0x140198398
 * Callers:
 *     wcstoxlX @ 0x140197A1C (wcstoxlX.c)
 *     wcstoxq @ 0x140198128 (wcstoxq.c)
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
