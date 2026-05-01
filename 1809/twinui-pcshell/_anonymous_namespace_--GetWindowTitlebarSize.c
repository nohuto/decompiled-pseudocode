/*
 * XREFs of _anonymous_namespace_::GetWindowTitlebarSize @ 0x1801F7B7C
 * Callers:
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1801F9698 (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005726C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x1801F7A30 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 */

__int64 __fastcall anonymous_namespace_::GetWindowTitlebarSize(HWND hWnd, __int64 nNumber, __int64 a3)
{
  int v3; // esi
  HRESULT WindowAttribute; // eax
  float v6; // xmm6_4
  const char *v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 pvAttribute; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  struct tagRECT Rect; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = nNumber;
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService((__int64)hWnd, nNumber, a3);
  pvAttribute = 0LL;
  v16 = 0LL;
  WindowAttribute = DwmGetWindowAttribute(hWnd, 5u, &pvAttribute, 0x10u);
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      51LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)WindowAttribute);
    __debugbreak();
  }
  v6 = (float)((float)(HIDWORD(v16) - HIDWORD(pvAttribute)) * 100.0) / (float)v3;
  if ( !GetClientRect(hWnd, &Rect) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      v7);
    __debugbreak();
  }
  v8 = Rect.right - Rect.left;
  if ( (GetWindowLongW(hWnd, -16) & 0x200000) != 0 )
  {
    v12 = MulDiv(v3, 96, 100);
    v8 += GetSystemMetricsForDpi(2LL, v12);
  }
  if ( v6 == 0.0 )
    *((float *)&v14 + 1) = (float)(int)GetDefaultTitlebarHeightInLogicalPixels(v10, v9, v11);
  else
    *((float *)&v14 + 1) = v6;
  *(float *)&v14 = (float)((float)v8 * 100.0) / (float)v3;
  return v14;
}
