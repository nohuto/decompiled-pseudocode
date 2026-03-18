/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007F41C
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18007F130 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180215140 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802338F0 (-CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800C2008 (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(unsigned __int32 a1, __int64 a2, const struct WICRect *a3, unsigned int a4)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  if ( !a3 || a3->Width < 0 || a3->Height < 0 )
  {
    v10 = -2147024809;
    v12 = 1681;
    goto LABEL_10;
  }
  PixelFormatSize = GetPixelFormatSize((enum DXGI_FORMAT)a1);
  v9 = HrCalcRequiredBufferSizeWorker(PixelFormatSize, v7, *(_DWORD *)(v6 + 8), v8, &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v9, 0x698u);
    return v10;
  }
  if ( v13 > a4 )
  {
    v10 = -2003292276;
    v12 = 1692;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v10, v12);
  }
  return v10;
}
