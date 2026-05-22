/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180004DEC
 * Callers:
 *     __dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent___::_1_::dtor$1 @ 0x18012F668 (__dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent___--_1_--dtor$1.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$4 @ 0x18012F6E4 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$4.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$13 @ 0x18012F6FA (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$13.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$6 @ 0x180130D88 (_MPCHeadUpdateListener--Initialize_--_1_--dtor$6.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state_____ptr64_void_(__cdecl_)(wil::details::event_watcher_state_____ptr64)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state_____ptr64_0_std::nullptr_t____wil::err_exception_policy_::create_take_hevent_ownership_::_1_::dtor$0 @ 0x180130DE2 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details--e.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$13 @ 0x18013119E (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$13.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$2 @ 0x180136015 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180136015.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
        void **a1)
{
  void *v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 && !CloseHandle(v1) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v2);
    JUMPOUT(0x180004E1DLL);
  }
}
