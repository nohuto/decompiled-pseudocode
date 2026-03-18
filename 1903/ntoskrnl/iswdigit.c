/*
 * XREFs of iswdigit @ 0x1401A0840
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140659540 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
