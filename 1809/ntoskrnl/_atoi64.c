/*
 * XREFs of _atoi64 @ 0x140195060
 * Callers:
 *     KiMatchLoadOption @ 0x1405748D8 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x140195890 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
