/*
 * XREFs of ?reset@?$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1803FE218
 * Callers:
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x1803FD1C8 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FDA78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::reset(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
      *(_QWORD *)(a1 + 8),
      &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
      &v5);
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 16))(v5, *(_QWORD *)a1);
      if ( v2 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1952LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
          (const char *)(unsigned int)v2);
        __debugbreak();
      }
    }
    *(_QWORD *)a1 = 0LL;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 8));
    v3 = v5;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
