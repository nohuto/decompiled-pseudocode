/*
 * XREFs of BgpFoGetTextMetrics @ 0x14016F6C4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140179EF4 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x14018685C (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409545A0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x1409FB738 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14016F6F4 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
