/*
 * XREFs of _wtol @ 0x140195DE0
 * Callers:
 *     _wtoi @ 0x140195DC0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140668C44 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x140197DC4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
