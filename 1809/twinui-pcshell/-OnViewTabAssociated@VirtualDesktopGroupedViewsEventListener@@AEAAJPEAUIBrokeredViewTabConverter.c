/*
 * XREFs of ?OnViewTabAssociated@VirtualDesktopGroupedViewsEventListener@@AEAAJPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIViewTabEventArgs@3456@@Z @ 0x1803977C4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter_____ptr64_Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____ptr64_::Invoke @ 0x180397640 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180397640.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopGroupedViewsEventListener::OnViewTabAssociated(
        VirtualDesktopGroupedViewsEventListener *this,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *a2,
        struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+38h] BYREF

  v12 = a2;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v7 = *((_QWORD *)this + 8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))(*(_QWORD *)v7 + 24LL))(
           v7,
           v13,
           &v12);
    v6 = v8;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v14);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             v12,
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 10));
      v6 = v9;
      if ( v9 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v6;
}
