/*
 * XREFs of zzzDestroyCaret @ 0x1C00868C0
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C009A170 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008B328 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
