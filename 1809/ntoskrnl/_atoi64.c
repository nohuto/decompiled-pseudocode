/*
 * XREFs of _atoi64 @ 0x140194F00
 * Callers:
 *     KiMatchLoadOption @ 0x1405738D8 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x140195730 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
