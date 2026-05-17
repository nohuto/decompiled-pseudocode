/*
 * XREFs of _iswctype_l @ 0x180093830
 * Callers:
 *     wcstoxq @ 0x180091BE4 (wcstoxq.c)
 *     wcstoxlX @ 0x180095D7C (wcstoxlX.c)
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
