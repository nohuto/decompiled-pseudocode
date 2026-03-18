/*
 * XREFs of zzzShowCaret @ 0x1C0226E2C
 * Callers:
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00DDA28 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !(unsigned int)UT_CaretSet(a1, a2, a3, a4) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
