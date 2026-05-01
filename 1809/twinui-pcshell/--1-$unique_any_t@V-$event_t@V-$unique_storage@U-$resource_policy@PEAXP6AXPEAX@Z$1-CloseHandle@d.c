/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800E573C
 * Callers:
 *     _wil::event_t_wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void_____ptr64_void_(__cdecl_)(void_____ptr64)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void_____ptr64_0_std::nullptr_t____wil::err_exception_policy____wil::err_exception_policy_::event_t_wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void_____ptr64_void_(__cdecl_)(void_____ptr64)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void_____ptr64_0_std::nullptr_t____wil::err_exception_policy____wil::err_exception_policy__::_1_::dtor$0 @ 0x1801943A9 (_wil--event_t_wil--unique_any_t_wil--event_t_wil--details--unique_storage_wil--details--resource.c)
 *     _DefaultIconManager::SetupAppSpecifiedIconsForView_::_1_::dtor$3 @ 0x180200491 (_DefaultIconManager--SetupAppSpecifiedIconsForView_--_1_--dtor$3.c)
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$3 @ 0x1802044B0 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$3.c)
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$4 @ 0x1802044C0 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$4.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state_____ptr64_void_(__cdecl_)(wil::details::event_watcher_state_____ptr64)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state_____ptr64_0_std::nullptr_t____wil::err_returncode_policy_::create_::_1_::dtor$0 @ 0x1802BE986 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details--e.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state_____ptr64_void_(__cdecl_)(wil::details::event_watcher_state_____ptr64)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state_____ptr64_0_std::nullptr_t____wil::err_returncode_policy_::create_take_hevent_ownership_::_1_::dtor$0 @ 0x1802BEAE9 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wi_ea_1802BEAE9.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$2 @ 0x18039A4E5 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$3 @ 0x18039A4F5 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$3.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
