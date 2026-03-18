/*
 * XREFs of zzzDestroyCaret @ 0x1C00DD7F0
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C001BAC0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00DDA28 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00DDCEC (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret(v1, v0, v2, v3);
  return 1LL;
}
