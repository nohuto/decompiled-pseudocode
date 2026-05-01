/*
 * XREFs of ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x18041D5A4
 * Callers:
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x18041C8F0 (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x18041C304 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@Y.c)
 *     ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18041CAFC (-AddedTab@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITa.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopGroupedViewsEventListener::TabAdded(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, void *, _QWORD *); // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v17; // [rsp+98h] [rbp+48h]
  __int64 *v18; // [rsp+A0h] [rbp+50h]
  __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v18 = a3;
  v17 = a2;
  v14[1] = (RTL_SRWLOCK *)-2LL;
  v16 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD *))*winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs>::AddedTab(
                                                              a3,
                                                              &v12);
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown>::type>(&v19, v6);
  v7 = v19;
  v19 = 0LL;
  v13 = v7;
  if ( v12 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v12);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v9(v8, v7, &v16) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v14);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 48LL))(
            *(_QWORD *)(a1 + 88),
            v16,
            *(_QWORD *)(a1 + 72),
            *(_QWORD *)(a1 + 80));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        51LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
  }
  if ( v7 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v13);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( *a2 )
    result = winrt::com_ptr<IInspectable>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<IInspectable>::unconditional_release_ref(a3);
  return result;
}
