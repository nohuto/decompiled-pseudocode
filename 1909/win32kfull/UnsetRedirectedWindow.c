/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00894C0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9710 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 * Callees:
 *     UnredirectDCEs @ 0x1C002D49C (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C002F780 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00326C0 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00895A0 (DeleteOldRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  int v6; // edx
  unsigned int v7; // eax
  HSURF RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
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
