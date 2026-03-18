/*
 * XREFs of BgkpAcquireConsole @ 0x140292518
 * Callers:
 *     BgkDisplayStringEx @ 0x140292334 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x140292450 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1402924A0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409932C0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140993390 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409933E0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140993470 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_14042A688) != 0;
}
