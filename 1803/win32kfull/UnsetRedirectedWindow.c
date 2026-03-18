/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00C4B08
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 * Callees:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0074FB8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C0077790 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C4BEC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v4; // esi
  __int64 Prop; // rbp
  int v6; // edx
  unsigned int v7; // eax
  __int64 RedirectionBitmap; // rbx

  v4 = 1;
  Prop = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomLayer, 1LL);
  v6 = *(_DWORD *)(Prop + 32) & ~a2;
  *(_DWORD *)(Prop + 32) = v6;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0);
    v6 = *(_DWORD *)(Prop + 32);
    v4 = v7;
  }
  if ( !v6 )
  {
    SetOrClrWF(0, (__int64)a1, 2848, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v4 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v4;
}
