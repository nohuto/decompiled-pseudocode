/*
 * XREFs of BgkpAcquireConsole @ 0x1402927B8
 * Callers:
 *     BgkDisplayStringEx @ 0x1402925D4 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1402926F0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x140292740 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409932C0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140993390 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409933E0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140993470 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_14042A678) != 0;
}
