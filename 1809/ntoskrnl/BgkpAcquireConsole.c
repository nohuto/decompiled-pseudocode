/*
 * XREFs of BgkpAcquireConsole @ 0x14027DD28
 * Callers:
 *     BgkDisplayStringEx @ 0x14027DB44 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14027DC60 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14027DCB0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140953230 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140953300 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140953350 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409533B0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140404088) != 0;
}
