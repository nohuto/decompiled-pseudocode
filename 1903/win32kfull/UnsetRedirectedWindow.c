/*
 * XREFs of UnsetRedirectedWindow @ 0x1C0044AF0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 * Callees:
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C0044BD0 (DeleteOldRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  int v6; // edx
  unsigned int v7; // eax
  HSURF RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  v6 = *(_DWORD *)(Prop + 32) & ~a2;
  *(_DWORD *)(Prop + 32) = v6;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0);
    v6 = *(_DWORD *)(Prop + 32);
    v3 = v7;
  }
  if ( !v6 )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap((__int64)a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v3;
}
