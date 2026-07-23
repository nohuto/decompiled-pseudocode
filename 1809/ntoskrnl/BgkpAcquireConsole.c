/*
 * XREFs of BgkpAcquireConsole @ 0x14027DF18
 * Callers:
 *     BgkDisplayStringEx @ 0x14027DD34 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14027DE50 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14027DEA0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140954230 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140954300 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140954350 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409543B0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140405088) != 0;
}
