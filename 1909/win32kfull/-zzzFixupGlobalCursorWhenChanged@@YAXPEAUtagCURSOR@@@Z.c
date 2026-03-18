/*
 * XREFs of ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0059DAC
 * Callers:
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0059A10 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00F1354 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EC00C (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzFixupGlobalCursorWhenChanged(struct tagCURSOR **a1)
{
  if ( gpcurLogCurrent == a1[6] )
  {
    gpcurLogCurrent = 0LL;
    gpcurPhysCurrent = 0LL;
    zzzUpdateCursorImage();
  }
}
