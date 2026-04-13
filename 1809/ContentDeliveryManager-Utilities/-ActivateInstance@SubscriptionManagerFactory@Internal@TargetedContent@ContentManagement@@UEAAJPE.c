/*
 * XREFs of ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18001F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x18003FF6C (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *this,
        struct IInspectable **a2)
{
  int v3; // eax
  const char *v4; // r9
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IInspectable **); // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IInspectable **); // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(&v8);
    v3 = (**v8)(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.h",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x18001F555LL);
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **)))(*v5)[2])(v5);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.h",
                           v4);
  }
  return result;
}
