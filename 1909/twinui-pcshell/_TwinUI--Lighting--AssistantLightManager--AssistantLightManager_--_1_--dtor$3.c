/*
 * XREFs of _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$3 @ 0x18041F39E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor_3(__int64 a1, _QWORD *a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
    (wil::details **)(a2[20] + 64LL),
    a2);
}
