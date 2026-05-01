/*
 * XREFs of ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x18036DAB4
 * Callers:
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18036D9CC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180363FE0 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x18036D7D8 (-GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA-AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z.c)
 */

void __fastcall GDIHelpers::RenderCenteredGlyph(
        HDC hdc,
        HDC h,
        const struct tagRECT *a3,
        COLORREF a4,
        COLORREF color,
        const RECT *lprcSrc)
{
  HGDIOBJ v9; // rbx
  __int64 v10; // r8
  wchar_t chText[4]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-30h] BYREF

  GDIHelpers::FillRectARGB(hdc, lprcSrc, a3, a4);
  v9 = SelectObject(hdc, h);
  SetBkColor(hdc, a4);
  SetTextColor(hdc, color);
  GDIHelpers::GetDrawTextRectForCenteredGlyph(&rc, hdc, v10, (__int64)lprcSrc);
  if ( rc.left < rc.right && rc.top < rc.bottom )
  {
    wcscpy(chText, L"");
    DrawTextW(hdc, chText, 1, &rc, 0x21u);
  }
  SelectObject(hdc, v9);
}
