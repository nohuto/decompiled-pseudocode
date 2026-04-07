/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047098
 * Callers:
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180045D30 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x1800465B0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180096660 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180098510 (-Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180099430 (-Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180099B90 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009A2A4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009AD50 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003E17C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800471CC (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapFromAtlas(
        void *const a1,
        int iPartId,
        struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  HRESULT ThemeMargins; // eax
  unsigned int v9; // ebx
  HRESULT ThemeRect; // eax
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  int v12; // eax
  struct tagRECT pRect; // [rsp+40h] [rbp-48h] BYREF

  if ( dword_1800D7BDC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7BDC);
    if ( dword_1800D7BDC == -1 )
    {
      dword_1800D5080 = -2147023728;
      Init_thread_footer(&dword_1800D7BDC);
    }
  }
  if ( a3 && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a3), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5080, 1u, ThemeMargins, 0x219u);
  }
  else
  {
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5080, 1u, ThemeRect, 0x21Du);
    }
    else
    {
      InflateRect(&pRect, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v12 = CBitmapSource::Create(AtlasImageFromTheme, &pRect, a3, a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5080, 1u, v12, 0x225u);
    }
  }
  return v9;
}
