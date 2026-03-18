/*
 * XREFs of zzzHideCaret @ 0x1C0226E04
 * Callers:
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00DDA28 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !(unsigned int)UT_CaretSet(a1, a2, a3, a4) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
