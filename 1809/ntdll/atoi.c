/*
 * XREFs of atoi @ 0x180090800
 * Callers:
 *     <none>
 * Callees:
 *     strtolX @ 0x1800953D0 (strtolX.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return strtolX(String, 0LL, 10LL, 1LL);
  return result;
}
