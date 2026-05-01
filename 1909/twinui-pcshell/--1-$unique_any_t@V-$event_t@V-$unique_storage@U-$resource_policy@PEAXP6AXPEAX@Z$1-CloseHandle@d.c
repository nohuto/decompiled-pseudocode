/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180126998
 * Callers:
 *     _wil::event_t_wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy____wil::err_exception_policy_::event_t_wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy____wil::err_exception_policy__::_1_::dtor$0 @ 0x1801FA4BD (_wil--event_t_wil--unique_any_t_wil--event_t_wil--details--unique_storage_wil--details--resource.c)
 *     _DefaultIconManager::SetupAppSpecifiedIconsForView_::_1_::dtor$3 @ 0x180272C02 (_DefaultIconManager--SetupAppSpecifiedIconsForView_--_1_--dtor$3.c)
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$3 @ 0x18027C180 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$3.c)
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$4 @ 0x18027C190 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$4.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$2 @ 0x18041F38E (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$3 @ 0x18041F39E (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$3.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011FB88 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
