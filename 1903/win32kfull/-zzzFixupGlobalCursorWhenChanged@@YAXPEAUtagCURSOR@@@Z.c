/*
 * XREFs of ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00B88BC
 * Callers:
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00B8520 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EC18C (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
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
