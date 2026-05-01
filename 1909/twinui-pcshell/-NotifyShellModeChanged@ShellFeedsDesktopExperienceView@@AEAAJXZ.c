/*
 * XREFs of ?NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009D9C0
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18009DC90 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009DBF4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyShellModeChanged(ShellFeedsDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HSTRING_HEADER *v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v10[1] = -2LL;
  v9 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v12,
         (__int64 *)&v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10[0] = (__int64)v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451548);
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v10,
           (HSTRING)v4[1].Reserved.Reserved1,
           v5,
           *((_BYTE *)this + 156));
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = ShellFeedsDesktopExperienceView::NotifyView(this, L"NotifyShellModeChanged", v9);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v7 = 1312LL;
    }
    else
    {
      v7 = 1311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v3;
}
