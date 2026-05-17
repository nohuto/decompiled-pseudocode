/*
 * XREFs of atol @ 0x18008D120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return sub_180091C70(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
