/*
 * XREFs of zzzShowCaret @ 0x1C023E4BC
 * Callers:
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00285A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C002868C (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
