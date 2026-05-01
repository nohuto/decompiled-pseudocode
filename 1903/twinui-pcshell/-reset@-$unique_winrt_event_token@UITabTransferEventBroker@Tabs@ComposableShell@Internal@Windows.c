/*
 * XREFs of ?reset@?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x18025A3B0
 * Callers:
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x180255B10 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@Compo.c)
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x180255B74 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBrok_ea_180255B74.c)
 *     ??1TabTransferManager@@EEAA@XZ @ 0x180255DC8 (--1TabTransferManager@@EEAA@XZ.c)
 *     ??4?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180255F44 (--4-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@w.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset(
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
      &GUID_4897dc3a_5143_5478_912e_a6edc7c5a2ab,
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
