/*
 * XREFs of GetWndSBDisableFlags @ 0x1C0106D0C
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0106138 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02286D4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228B64 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rax
  int v5; // ecx
  int v6; // eax

  v4 = *(int **)(a1 + 128);
  if ( v4 )
  {
    v5 = *v4;
    v6 = *v4 >> 2;
    if ( !(_DWORD)a2 )
      LOBYTE(v6) = v5;
    return v6 & 3;
  }
  else
  {
    UserSetLastError(1447LL, a2, a3, a4);
    return 0LL;
  }
}
