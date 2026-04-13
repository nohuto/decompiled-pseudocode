/*
 * XREFs of ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003CE4C
 * Callers:
 *     ??1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003C8BC (--1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18003F86C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ??1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004C1BC (--1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEA.c)
 *     ??1ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004C73C (--1ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@.c)
 *     ??1ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004CCBC (--1ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEA.c)
 *     ??1ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004D23C (--1ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QE.c)
 *     _lambda_ade65b3910699df78508c17998720da4_::operator() @ 0x18004E628 (_lambda_ade65b3910699df78508c17998720da4_--operator().c)
 *     _lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator() @ 0x18004EA0C (_lambda_fb6889284f8c6875beea5ab05f2a2ddf_--operator().c)
 *     _lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator() @ 0x18004EDEC (_lambda_5733d5035a874d27ce3bcb89134ebdd6_--operator().c)
 *     _lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator() @ 0x18004F298 (_lambda_c3bf47982beeb92429b0310f4e2c5f50_--operator().c)
 * Callees:
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003CEBC (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflect.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
