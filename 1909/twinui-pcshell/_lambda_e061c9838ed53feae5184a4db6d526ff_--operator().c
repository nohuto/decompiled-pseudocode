/*
 * XREFs of _lambda_e061c9838ed53feae5184a4db6d526ff_::operator() @ 0x1803724F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_e061c9838ed53feae5184a4db6d526ff___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::Invoke @ 0x180372A80 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180372A80.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180372C14 (-OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 */

__int64 __fastcall lambda_e061c9838ed53feae5184a4db6d526ff_::operator()(
        SwitchItemCollection **a1,
        __int64 a2,
        __int64 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  HSTRING v9; // r8
  int v10; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string; // [rsp+28h] [rbp-38h] BYREF
  struct IInspectable *v14; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v14 = 0LL;
  v5 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    v7 = *a3;
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v7 + 56))(a3, &string);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v8);
LABEL_10:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_11;
    }
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsSelected", 0xBu, 0xAu);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)string,
                          v16,
                          v9) )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      v10 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*a3 + 48))(
              a3,
              &v12);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x90,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
        goto LABEL_10;
      }
      SwitchItemCollection::OnTabSelectionChanged(*a1, v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    v6 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v6;
}
