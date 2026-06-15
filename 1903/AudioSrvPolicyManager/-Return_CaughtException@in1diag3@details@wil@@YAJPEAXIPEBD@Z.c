/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180017C9C
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$15 @ 0x1800365F1 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--catch$15.c)
 *     _CProcess::Initialize_::_1_::catch$9 @ 0x180036916 (_CProcess--Initialize_--_1_--catch$9.c)
 *     _CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::catch$2 @ 0x180036AB4 (_CProcess--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--catch$2.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$2 @ 0x180037154 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _QueueGenericWorkItem_::_1_::catch$10 @ 0x180037496 (_QueueGenericWorkItem_--_1_--catch$10.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$7 @ 0x1800375B4 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--catch$7.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$13 @ 0x180037641 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--catch$13.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch$3 @ 0x180037888 (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--catch$3.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$2 @ 0x1800378C1 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--catch$2.c)
 *     _ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch$2 @ 0x1800378FA (_ApplicationSpecificEndpointInfo--RemoveRelatedProcess_--_1_--catch$2.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$13 @ 0x18003797B (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--catch$13.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180017CC4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException(this, a2, a3, a4);
}
