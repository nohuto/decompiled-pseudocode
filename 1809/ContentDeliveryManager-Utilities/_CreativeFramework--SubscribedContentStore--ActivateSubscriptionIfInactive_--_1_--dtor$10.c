/*
 * XREFs of _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$10 @ 0x1800C9E66
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>((void **)(a2 + 104));
}
