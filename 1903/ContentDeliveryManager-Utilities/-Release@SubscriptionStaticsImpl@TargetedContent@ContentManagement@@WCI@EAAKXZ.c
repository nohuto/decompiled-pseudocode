/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800233D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(__int64 a1)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::Release((ContentManagement::ContentDeliveryManagerConfigurationStatics *)(a1 - 40));
}
