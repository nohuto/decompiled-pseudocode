/*
 * XREFs of _wcslwr_s @ 0x140195B30
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     wcsnlen @ 0x1401979D0 (wcsnlen.c)
 */

errno_t __cdecl wcslwr_s(wchar_t *Str, size_t SizeInWords)
{
  wchar_t *v2; // rbx
  wchar_t v4; // cx

  v2 = Str;
  if ( !Str )
    goto LABEL_2;
  if ( wcsnlen(Str, SizeInWords) >= SizeInWords )
  {
    *v2 = 0;
LABEL_2:
    xHalTimerWatchdogStop();
    return 22;
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int16)(v4 - 65) <= 0x19u )
      *v2 = v4 + 32;
    ++v2;
  }
  return 0;
}
