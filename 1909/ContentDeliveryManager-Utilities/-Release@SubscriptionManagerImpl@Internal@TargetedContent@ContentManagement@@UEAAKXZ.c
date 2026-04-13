/*
 * XREFs of ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x18003D5F0
 * Callers:
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x180044E60 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180044F40 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ @ 0x180044FE0 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::Release(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(this);
}
