/*
 * XREFs of ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180051F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180052080 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32Exclusives@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013227C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32Exclusives@@@wil@@CA.c)
 */

__int64 __fastcall CWin32ApplicationView::GetFrameworkViewType(
        CWin32ApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  int Window; // eax
  char v4; // bl
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+30h] [rbp+8h] BYREF

  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)((char *)this + 152), &hWnd);
  v4 = 0;
  v5 = Window;
  if ( Window < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window);
    return v5;
  }
  else
  {
    if ( GetPropW(hWnd, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Exclusives>::ReportUsageToService();
      v4 = 1;
    }
    *(_DWORD *)a2 = v4 != 0 ? 1 : 6;
    return 0LL;
  }
}
