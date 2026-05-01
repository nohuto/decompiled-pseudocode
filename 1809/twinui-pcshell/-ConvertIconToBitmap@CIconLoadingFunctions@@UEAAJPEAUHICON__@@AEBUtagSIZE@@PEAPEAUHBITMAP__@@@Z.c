/*
 * XREFs of ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802E64A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     PremultiplyAlphaChannel @ 0x1800E49A4 (PremultiplyAlphaChannel.c)
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802E65F8 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CIconLoadingFunctions::ConvertIconToBitmap(
        CIconLoadingFunctions *this,
        HICON a2,
        const struct tagSIZE *a3,
        HBITMAP *a4)
{
  int BitmapFromIconWithAlpha; // eax
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  HBITMAP v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HGDIOBJ ho; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  ho = 0LL;
  BitmapFromIconWithAlpha = CreateBitmapFromIconWithAlpha(a2, a3->cx, (HBITMAP *)&ho);
  v6 = BitmapFromIconWithAlpha;
  if ( BitmapFromIconWithAlpha < 0 )
  {
    v7 = (unsigned int)BitmapFromIconWithAlpha;
    v8 = 42LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)v7);
    goto LABEL_7;
  }
  v9 = (HBITMAP)PremultiplyAlphaChannel((__int64)ho);
  if ( !v9 )
  {
    v6 = -2147024882;
    v8 = 44LL;
    v7 = 2147942414LL;
    goto LABEL_3;
  }
  *a4 = v9;
  v6 = 0;
LABEL_7:
  if ( ho )
    DeleteObject(ho);
  return v6;
}
