/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C11FC
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$105 @ 0x18006A800 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$105.c)
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::catch$33 @ 0x18006BFF3 (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--catch$33.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$38 @ 0x18006C832 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$38.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$79 @ 0x18006D080 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$79.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$16 @ 0x18006D100 (_CPlaybackNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$62 @ 0x18006D190 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$62.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$81 @ 0x18006F120 (_CAudioResourceManager--DestroyStream_--_1_--catch$81.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch$33 @ 0x1800CAAEE (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--catch$33.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$9 @ 0x1800E4B90 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$9.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$15 @ 0x1800E4F2F (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$15.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$16 @ 0x1800EFBA6 (_CCaptureNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x1800EFC90 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800BBE88 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
