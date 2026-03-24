/*
 * XREFs of BgkpReleaseConsole @ 0x14027DD70
 * Callers:
 *     BgkDisplayCharacter @ 0x140953230 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140953300 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140953350 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409533B0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140404088);
}
