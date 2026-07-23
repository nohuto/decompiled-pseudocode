/*
 * XREFs of _wtol @ 0x180091F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *String)
{
  if ( String )
    return wcstolX(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
