/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180181660
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007F2E4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18009B420 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rcx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v11; // r9d
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx

  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80))
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0xADu);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 28));
    v12 = *a2 * (PixelFormatSize >> 3) + a2[1] * v11;
    v13 = CBitmap::CopyPixelsHelper(
            (enum DXGI_FORMAT)*(_DWORD *)(a1 + 28),
            a2[2] - *a2,
            a2[3] - a2[1],
            v11,
            *(_DWORD *)(a1 + 48) - (int)v12,
            (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v12),
            a3,
            a4,
            a5);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xBDu);
  }
  return v15;
}
