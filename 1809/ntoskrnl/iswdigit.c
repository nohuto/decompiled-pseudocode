/*
 * XREFs of iswdigit @ 0x140196050
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140667A84 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1401983E8 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
