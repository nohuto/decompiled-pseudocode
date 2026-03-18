/*
 * XREFs of zzzDestroyCaret @ 0x1C00F5DE0
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C003AF40 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00285A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
