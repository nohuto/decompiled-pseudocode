/*
 * XREFs of _wtol @ 0x1401A0B90
 * Callers:
 *     _wtoi @ 0x1401A0B70 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14066C560 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1401A2BF4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
