/*
 * XREFs of UserReleaseRedirectionBitmap @ 0x1C01B1A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0074FB8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C0077790 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C4BEC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UserReleaseRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  HSURF RedirectionBitmap; // rdi

  result = ValidateHwnd(a1);
  v2 = result;
  if ( result && (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 0x20) != 0 )
  {
    HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)result, 0LL, 0);
    DeleteOldRedirectionBitmap(v2);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(v2);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs((struct tagWND *)v2);
      SetRedirectionBitmap((struct tagWND *)v2, 0LL, 0);
      DeleteOrSetRedirectionBitmap(v2, RedirectionBitmap, 0);
    }
    return RealGetProp(*(_QWORD *)(v2 + 120), (unsigned __int16)atomLayer, 1LL);
  }
  return result;
}
