/*
 * XREFs of BgpFoGetTextMetrics @ 0x1401795D4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1401900F8 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140A411BC (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140179604 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
