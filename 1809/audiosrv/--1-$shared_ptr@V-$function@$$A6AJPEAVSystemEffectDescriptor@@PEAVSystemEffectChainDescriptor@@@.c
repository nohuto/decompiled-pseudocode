/*
 * XREFs of ??1?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAA@XZ @ 0x1800D89E4
 * Callers:
 *     _SystemEffectDescriptor::GetChainDescriptorForMode_::_1_::dtor$1 @ 0x18006A900 (_SystemEffectDescriptor--GetChainDescriptorForMode_--_1_--dtor$1.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18006B00A (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x18006B580 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x18006D0C0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x18006D140 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x18006D2D0 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x18006D300 (_CSebNotifier--AcquireSebReference_--_1_--dtor$1.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x18006D360 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$51 @ 0x18006D9B0 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$51.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$59 @ 0x18006DA50 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$59.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$22 @ 0x18006DAF0 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$22.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$39 @ 0x18006DBB0 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$39.c)
 *     _CreateSaDevice_::_1_::dtor$90 @ 0x18006E230 (_CreateSaDevice_--_1_--dtor$90.c)
 *     _CreateSaDevice_::_1_::dtor$106 @ 0x18006E350 (_CreateSaDevice_--_1_--dtor$106.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$58 @ 0x18006E990 (_InitializeStreamAndModeDescriptors_--_1_--dtor$58.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$65 @ 0x18006E9F0 (_InitializeStreamAndModeDescriptors_--_1_--dtor$65.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$87 @ 0x18006EAB0 (_InitializeStreamAndModeDescriptors_--_1_--dtor$87.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$103 @ 0x18006EB90 (_InitializeStreamAndModeDescriptors_--_1_--dtor$103.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x18006F180 (_CAudioResourceManager--DestroyStream_--_1_--dtor$6.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$6 @ 0x1800E0898 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$2 @ 0x1800E4F17 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$2.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800EFB68 (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x1800EFB8E (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x18011412B (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x180114D32 (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1801158D2 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
