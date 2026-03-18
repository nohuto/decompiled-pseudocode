/*
 * XREFs of IsUninterceptable @ 0x1C00E9C20
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00D7DB0 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00EA190 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
