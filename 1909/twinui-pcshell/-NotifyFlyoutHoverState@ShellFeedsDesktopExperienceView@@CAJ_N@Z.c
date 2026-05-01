/*
 * XREFs of ?NotifyFlyoutHoverState@ShellFeedsDesktopExperienceView@@CAJ_N@Z @ 0x18009D804
 * Callers:
 *     ?LowLevelMouseHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z @ 0x18009D700 (-LowLevelMouseHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$ShellFeedsDesktopExperienceView_NotifyFlyoutHoverState@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x18009B4E0 (--$ShellFeedsDesktopExperienceView_NotifyFlyoutHoverState@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyFlyoutHoverState(char a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  HSTRING_HEADER *v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, PVOID, __int64); // rbx
  HSTRING_HEADER *v9; // rax
  char v10[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  v10[0] = a1;
  if ( `anonymous namespace'::g_lastReportedFlyoutHoverVisibility != a1
    && *((_QWORD *)`anonymous namespace'::g_shellFeedsExperienceView + 13) )
  {
    ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_NotifyFlyoutHoverState<bool &>((__int64)v10);
    `anonymous namespace'::g_lastReportedFlyoutHoverVisibility = v10[0];
    v11 = 0LL;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v1 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v14,
           &v11);
    v2 = v1;
    if ( v1 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v1);
LABEL_7:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return v2;
    }
    v12[0] = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451508);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v12,
           (HSTRING)v3[1].Reserved.Reserved1,
           v4,
           v10[0]);
    v2 = v5;
    v14 = 0LL;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      goto LABEL_7;
    }
    v7 = *((_QWORD *)`anonymous namespace'::g_shellFeedsExperienceView + 13);
    v8 = *(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v7 + 120LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451558);
    v8(v7, v9[1].Reserved.Reserved1, v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return 0LL;
}
