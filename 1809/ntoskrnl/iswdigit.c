/*
 * XREFs of iswdigit @ 0x140196030
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140667AA4 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1401983C8 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
