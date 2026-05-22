/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_failfast_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18002B554
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$29 @ 0x18003CCC7 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$29.c)
 *     _wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy___::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy____enum_wil::EventOptions__::_1_::dtor$1 @ 0x18003CCD9 (_wil--unique_any_t_wil--event_t_wil--details--unique_storage_wil--details--resource_policy_void_.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$4 @ 0x18003CD43 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$4.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$5 @ 0x18003CD59 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$5.c)
 *     _ViewHierarchy::ViewHierarchy_::_1_::dtor$9 @ 0x18003DC18 (_ViewHierarchy--ViewHierarchy_--_1_--dtor$9.c)
 *     _dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x18003E110 (_dynamic_atexit_destructor_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state___void_(__cdecl_)(wil::details::event_watcher_state__)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state___wil::details::event_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_::_1_::dtor$0 @ 0x180098182 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details--e.c)
 *     _MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor$7 @ 0x180110B10 (_MPCManagerClientFactory--CreateOnDedicatedThread_--_1_--dtor$7.c)
 *     _MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor$4 @ 0x180110B1C (_MPCManagerClientFactory--CreateOnDedicatedThread_--_1_--dtor$4.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$2 @ 0x1801510C9 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801510C9.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_failfast_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
