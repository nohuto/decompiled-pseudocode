/*
 * XREFs of zzzHideCaret @ 0x1C023EAB4
 * Callers:
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008B328 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
