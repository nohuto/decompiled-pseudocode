/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180022400
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021310 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@Conte.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021480 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementService@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800215F0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021D40 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021EB0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransiti.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18009A440 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvid.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // edi
  unsigned int v3; // ebx

  do
    v1 = *(unsigned int *)(a1 + 12);
  while ( (_DWORD)v1 != 0x7FFFFFFF
       && (_DWORD)v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), v1 - 1, v1) );
  v2 = *(_DWORD *)(a1 + 32);
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
