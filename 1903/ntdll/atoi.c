/*
 * XREFs of atoi @ 0x18008D0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091C70 @ 0x180091C70 (sub_180091C70.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_180091C70(String, 0LL, 10LL, 1LL);
  return result;
}
