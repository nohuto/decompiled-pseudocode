/*
 * XREFs of _atoi64 @ 0x18008D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return sub_180092CE4(String, 0LL, 10LL);
  else
    return 0LL;
}
