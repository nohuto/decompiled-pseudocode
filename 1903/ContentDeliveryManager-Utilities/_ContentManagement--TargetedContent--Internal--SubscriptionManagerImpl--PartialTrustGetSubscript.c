/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync_::_1_::catch$1 @ 0x1800CE179
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035FC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0xA9,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           a4);
  return &loc_1800406F7;
}
