/*
 * XREFs of GetWndSBDisableFlags @ 0x1C012FA58
 * Callers:
 *     xxxDrawScrollBar @ 0x1C012F578 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C01FFCCC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // eax

  v2 = *(int **)(a1 + 128);
  if ( v2 )
  {
    v3 = *v2;
    if ( (_DWORD)a2 )
      v3 >>= 2;
    return v3 & 3;
  }
  else
  {
    UserSetLastError(1447LL, a2);
    return 0LL;
  }
}
