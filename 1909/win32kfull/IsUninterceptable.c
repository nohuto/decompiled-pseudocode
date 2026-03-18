/*
 * XREFs of IsUninterceptable @ 0x1C00E8274
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00551E0 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00E88C8 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
