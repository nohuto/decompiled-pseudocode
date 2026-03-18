/*
 * XREFs of IsUninterceptable @ 0x1C00DFAAC
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00B5990 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00E0094 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
