/*
 * XREFs of _wtol @ 0x140195CA0
 * Callers:
 *     _wtoi @ 0x140195C80 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140667A84 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x140197C84 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
