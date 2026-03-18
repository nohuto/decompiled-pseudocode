/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1C01E9890
 * Callers:
 *     <none>
 * Callees:
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C0044BD0 (DeleteOldRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E908C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  HSURF v6; // rbx

  gbValidateHandleForIL = 0;
  result = ValidateHwnd(a1);
  v2 = (struct tagWND *)result;
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 0x20) != 0 )
    {
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)result, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v2);
      result = GetRedirectionBitmap((__int64)v2);
      v6 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v2, v3, v4, v5);
        SetRedirectionBitmap(v2, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v2, v6, 1);
        result = RecreateRedirectionBitmap(v2, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return UnsetRedirectedWindow(v2, 1);
      }
    }
  }
  return result;
}
