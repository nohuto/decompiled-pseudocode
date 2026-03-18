/*
 * XREFs of UnsetRedirectedWindow @ 0x1C000DFCC
 * Callers:
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01D4310 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     DeleteOldRedirectionBitmap @ 0x1C0072A8C (DeleteOldRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0073E98 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1C0074624 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  int v6; // edx
  unsigned int v7; // eax
  __int64 RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  v6 = *(_DWORD *)(Prop + 32) & ~a2;
  *(_DWORD *)(Prop + 32) = v6;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, 0LL);
    v6 = *(_DWORD *)(Prop + 32);
    v3 = v7;
  }
  if ( !v6 )
  {
    SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap(a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v3;
}
