/*
 * XREFs of zzzShowCaret @ 0x1C023EADC
 * Callers:
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008B328 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C008B40C (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
