/*
 * XREFs of atol @ 0x180090840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return strtolX(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
