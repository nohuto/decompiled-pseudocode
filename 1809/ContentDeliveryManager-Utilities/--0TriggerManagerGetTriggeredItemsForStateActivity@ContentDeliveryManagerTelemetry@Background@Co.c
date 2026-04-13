/*
 * XREFs of ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x180061DB4
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180064440 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180064818 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a___ @ 0x180068EB4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180065988 (--4-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::TriggerManagerGetTriggeredItemsForStateActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *a2)
{
  char *v3; // rcx

  *(_QWORD *)this = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v3 = (char *)this + 8;
  *((_QWORD *)v3 + 1) = this;
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_DWORD *)v3 + 6) = 0;
  *((_QWORD *)v3 + 4) = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v3);
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 1LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  memset_0((char *)this + 136, 0, 0x90uLL);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    this,
    a2);
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  return this;
}
