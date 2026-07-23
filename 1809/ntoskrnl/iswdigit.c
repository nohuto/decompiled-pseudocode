/*
 * XREFs of iswdigit @ 0x140196190
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140668C44 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x140198528 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
