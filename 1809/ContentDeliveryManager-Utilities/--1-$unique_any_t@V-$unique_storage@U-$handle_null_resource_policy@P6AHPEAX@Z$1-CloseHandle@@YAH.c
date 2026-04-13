/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800047E8
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180053658 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18005372C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$1 @ 0x1800C9C92 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$1.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue_::_1_::dtor$0 @ 0x1800C9E78 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--SubscriptionMapValue--Su.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
