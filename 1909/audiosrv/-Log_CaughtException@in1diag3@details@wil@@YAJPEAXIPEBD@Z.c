/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CF53C
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$16 @ 0x180070090 (_CPlaybackNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$53 @ 0x1800701C0 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$53.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$85 @ 0x180070240 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$85.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$55 @ 0x1800702F0 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$55.c)
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::catch$33 @ 0x180070EC4 (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--catch$33.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$81 @ 0x180071780 (_CAudioResourceManager--DestroyStream_--_1_--catch$81.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$64 @ 0x180073EC0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$64.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch$33 @ 0x1800D903E (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--catch$33.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$9 @ 0x1800EFC4A (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$9.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$15 @ 0x1800EFFD2 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$15.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$16 @ 0x1800FB778 (_CCaptureNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x1800FB90B (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800CA108 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
