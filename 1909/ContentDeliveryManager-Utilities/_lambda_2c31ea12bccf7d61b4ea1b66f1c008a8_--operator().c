/*
 * XREFs of _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator() @ 0x18003FB88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___::Run @ 0x180044690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___--Run.c)
 * Callees:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040A6C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *a1;
  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v2);
  }
  return result;
}
