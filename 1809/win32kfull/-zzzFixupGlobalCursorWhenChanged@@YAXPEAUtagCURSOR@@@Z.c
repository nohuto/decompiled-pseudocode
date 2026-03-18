/*
 * XREFs of ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D92A4
 * Callers:
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00D8EC8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C015DC24 (-zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
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
