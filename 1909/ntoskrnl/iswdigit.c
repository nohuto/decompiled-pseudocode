/*
 * XREFs of iswdigit @ 0x1401A0F60
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14066C560 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1401A3358 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
