/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800206A0
 * Callers:
 *     ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x18001F460 (-Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800218C0 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 *     ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021BB0 (--$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Servic.c)
 *     ??1?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800221A8 (--1-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WR.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180023190 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800231E0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 *     ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800503E0 (--$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windo.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180064440 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _lambda_3b51b811795083c8866600a62beaf61a_::__lambda_3b51b811795083c8866600a62beaf61a_ @ 0x180064F74 (_lambda_3b51b811795083c8866600a62beaf61a_--__lambda_3b51b811795083c8866600a62beaf61a_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // edi
  unsigned int v3; // ebx

  do
    v1 = *(unsigned int *)(a1 + 68);
  while ( (_DWORD)v1 != 0x7FFFFFFF
       && (_DWORD)v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v1 - 1, v1) );
  v2 = *(_DWORD *)(a1 + 88);
  v3 = v1 - 1;
  if ( (_DWORD)v1 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL, v1, 0x7FFFFFFFLL);
    if ( (v2 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  else if ( (v2 & 4) == 0 && (_DWORD)v1 == 2 )
  {
    goto LABEL_10;
  }
  return v3;
}
