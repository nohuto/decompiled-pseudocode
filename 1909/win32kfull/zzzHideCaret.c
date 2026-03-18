/*
 * XREFs of zzzHideCaret @ 0x1C023E494
 * Callers:
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00285A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
