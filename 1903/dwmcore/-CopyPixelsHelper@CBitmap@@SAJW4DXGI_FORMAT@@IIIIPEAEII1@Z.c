/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A3F7C
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018740 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A3DC0 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD0A0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180257940 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003F4C8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        __int32 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int8 PixelFormatSize; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int8 *v20; // rbx
  unsigned __int8 *v21; // rdi
  size_t v22; // r14
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a4, a2, a3, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 70;
    goto LABEL_21;
  }
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a7, a2, (unsigned int)v12, a8);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 77;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v23, 0LL);
    return v15;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x80070216, 0x4Fu, 0LL);
    return v15;
  }
  v18 = (a2 * PixelFormatSize + 7) >> 3;
  if ( (unsigned int)v18 > a7 )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, 0x80070057, 0x54u, 0LL);
  }
  else
  {
    if ( (_DWORD)v10 == a7 && a7 - (unsigned int)v18 < PixelFormatSize >> 3 )
    {
      if ( !is_mul_ok(v10, (unsigned int)v12) )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, 0x80070216, 0x61u, 0LL);
        return v15;
      }
      memcpy_0(a9, Src, v10 * (unsigned int)v12);
    }
    else if ( (_DWORD)v12 )
    {
      v20 = a9;
      v21 = Src;
      v22 = (unsigned int)v18;
      do
      {
        memcpy_0(v20, v21, v22);
        v20 += a7;
        v21 += v10;
        --v12;
      }
      while ( v12 );
    }
    return 0;
  }
  return v15;
}
