/*
 * XREFs of BgkpReleaseConsole @ 0x14027DF60
 * Callers:
 *     BgkDisplayCharacter @ 0x140954230 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140954300 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140954350 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409543B0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140405088);
}
