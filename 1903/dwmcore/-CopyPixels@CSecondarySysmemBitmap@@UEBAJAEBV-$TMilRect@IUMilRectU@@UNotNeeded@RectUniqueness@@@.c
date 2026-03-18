/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18003BE7C (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003BF18 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A3F7C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
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
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx

  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80))
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070057, 0xA8u, 0LL);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 28));
    v12 = *a2 * (PixelFormatSize >> 3) + a2[1] * v11;
    v13 = CBitmap::CopyPixelsHelper(
            *(_DWORD *)(a1 + 28),
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
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB8u, 0LL);
  }
  return v15;
}
