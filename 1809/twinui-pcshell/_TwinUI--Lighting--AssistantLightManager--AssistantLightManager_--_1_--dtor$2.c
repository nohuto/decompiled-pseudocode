/*
 * XREFs of _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$2 @ 0x18039A4E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor_2(__int64 a1, _QWORD *a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
    (wil::details **)(a2[20] + 56LL),
    a2);
}
