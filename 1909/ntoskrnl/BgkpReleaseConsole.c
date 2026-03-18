/*
 * XREFs of BgkpReleaseConsole @ 0x140292560
 * Callers:
 *     BgkDisplayCharacter @ 0x1409932C0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140993390 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409933E0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140993470 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_14042A688);
}
