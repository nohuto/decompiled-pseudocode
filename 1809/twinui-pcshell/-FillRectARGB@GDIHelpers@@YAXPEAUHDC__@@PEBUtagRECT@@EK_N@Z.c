/*
 * XREFs of ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180363FE0
 * Callers:
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x1803642F4 (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18036D9CC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x18036DAB4 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1803A8D2C (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

void __fastcall GDIHelpers::FillRectARGB(HDC hdc, const RECT *lprcSrc, const struct tagRECT *a3, int a4)
{
  _BYTE Bits[8]; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-9h] BYREF
  BITMAPINFO bmi; // [rsp+88h] [rbp+7h] BYREF

  memset_0(&bmi, 0, sizeof(bmi));
  bmi.bmiHeader.biCompression = 0;
  bmi.bmiHeader.biSize = 40;
  *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
  bmi.bmiHeader.biWidth = 1;
  rcDst = 0LL;
  bmi.bmiHeader.biHeight = 1;
  CopyRect(&rcDst, lprcSrc);
  Bits[1] = BYTE1(a4);
  Bits[2] = a4;
  Bits[3] = -1;
  Bits[0] = BYTE2(a4);
  StretchDIBits(
    hdc,
    rcDst.left,
    rcDst.top,
    rcDst.right - rcDst.left,
    rcDst.bottom - rcDst.top,
    0,
    0,
    1,
    1,
    Bits,
    &bmi,
    0,
    0xCC0020u);
}
