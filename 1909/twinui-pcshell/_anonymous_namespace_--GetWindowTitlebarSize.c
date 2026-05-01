/*
 * XREFs of _anonymous_namespace_::GetWindowTitlebarSize @ 0x18026810C
 * Callers:
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x180269AD8 (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 * Callees:
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x18004D4D8 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004D4FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall anonymous_namespace_::GetWindowTitlebarSize(HWND hWnd, __int64 nNumber, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  float v6; // xmm6_4
  __m128 v7; // xmm7
  int v8; // ebx
  unsigned int v9; // eax
  __m128 v10; // xmm0
  __int64 pvAttribute; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  struct tagRECT Rect; // [rsp+38h] [rbp-40h] BYREF

  v3 = nNumber;
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService((__int64)hWnd, nNumber, a3);
  pvAttribute = 0LL;
  v13 = 0LL;
  v6 = (float)v3;
  if ( DwmGetWindowAttribute(hWnd, 5u, &pvAttribute, 0x10u) < 0
    || (v7 = (__m128)COERCE_UNSIGNED_INT((float)(HIDWORD(v13) - HIDWORD(pvAttribute))),
        v7.m128_f32[0] = (float)(v7.m128_f32[0] * 100.0) / v6,
        v7.m128_f32[0] == 0.0) )
  {
    v7 = (__m128)COERCE_UNSIGNED_INT((float)(int)GetDefaultTitlebarHeightInLogicalPixels(v5));
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  GetClientRect(hWnd, &Rect);
  v8 = Rect.right - Rect.left;
  if ( (GetWindowLongW(hWnd, -16) & 0x200000) != 0 )
  {
    v9 = MulDiv(v3, 96, 100);
    v8 += GetSystemMetricsForDpi(2LL, v9);
  }
  v10 = (__m128)COERCE_UNSIGNED_INT((float)v8);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] * 100.0) / v6;
  return _mm_unpacklo_ps(v10, v7).m128_u64[0];
}
