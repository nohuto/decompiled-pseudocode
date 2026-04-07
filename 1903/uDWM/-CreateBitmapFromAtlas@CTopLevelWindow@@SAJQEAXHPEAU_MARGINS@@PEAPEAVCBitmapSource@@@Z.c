/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180045544
 * Callers:
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180044CF0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180045678 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x18009B0B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x18009CEC0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x18009DE00 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x18009E520 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x18009F6B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180041100 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800461BC (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  void *v14; // [rsp+28h] [rbp-60h]
  struct tagRECT pRect; // [rsp+40h] [rbp-48h] BYREF

  if ( dword_1800DEBF4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEBF4);
    if ( dword_1800DEBF4 == -1 )
    {
      dword_1800DC088 = -2147023728;
      Init_thread_footer(&dword_1800DEBF4);
    }
  }
  if ( a3 && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a3), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC088, 1u, ThemeMargins, 0x203u, v14);
  }
  else
  {
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC088, 1u, ThemeRect, 0x207u, v14);
    }
    else
    {
      InflateRect(&pRect, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v12 = CBitmapSource::Create(AtlasImageFromTheme, &pRect, a3, a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC088, 1u, v12, 0x20Fu, v14);
    }
  }
  return v9;
}
