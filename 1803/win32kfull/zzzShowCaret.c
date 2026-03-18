/*
 * XREFs of zzzShowCaret @ 0x1C01FE0D4
 * Callers:
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C003A940 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0063A78 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1, __int64 a2)
{
  if ( !(unsigned int)UT_CaretSet(a1, a2) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
