/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C020D9E4
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DB68 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0030948 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0033684 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     _SelectPalette @ 0x1C0106D94 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0121E60 (xxxRealizePalette.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C020D6B4 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     GreSetDIBits @ 0x1C02B9750 (GreSetDIBits.c)
 */

__int64 __fastcall xxxDIBtoBMP(const struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // r11
  unsigned int biWidth_low; // r14d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r15
  char *v12; // r12
  __int64 ScreenBitmap; // rsi
  HDC CompatibleDC; // rdi
  __int64 v15; // r14

  biSize = a1->bmiHeader.biSize;
  if ( !(unsigned int)GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize || BitmapBitsSize + (unsigned int)v8 < BitmapBitsSize || a3 < BitmapBitsSize + (unsigned int)v8 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->bmiHeader.biWidth);
      biWidth_high = HIWORD(a1->bmiHeader.biWidth);
      biHeight_high = HIWORD(a1->bmiHeader.biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->bmiHeader.biWidth;
  biWidth_high = a1->bmiHeader.biHeight;
  biHeight_high = a1->bmiHeader.biBitCount;
LABEL_9:
  v12 = (char *)a1 + v8;
  ScreenBitmap = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(biWidth_low, biWidth_high, biHeight_high);
    if ( ScreenBitmap )
    {
      v15 = 0LL;
      GreSelectBitmap(CompatibleDC);
      if ( a2 )
      {
        v15 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, (__int64)v12, (__int64)a1);
      if ( v15 )
      {
        SelectPalette((__int64)CompatibleDC, v15, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC);
    }
    GreDeleteDC(CompatibleDC);
  }
  return ScreenBitmap;
}
