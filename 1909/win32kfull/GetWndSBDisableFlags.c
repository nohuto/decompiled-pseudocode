/*
 * XREFs of GetWndSBDisableFlags @ 0x1C00EB194
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00EA614 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0240AD8 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240FE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rax
  int v5; // ecx
  int v6; // eax

  v4 = *(int **)(a1 + 152);
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
