/*
 * XREFs of _wtol @ 0x1401A0470
 * Callers:
 *     _wtoi @ 0x1401A0450 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140659540 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1401A24D4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
