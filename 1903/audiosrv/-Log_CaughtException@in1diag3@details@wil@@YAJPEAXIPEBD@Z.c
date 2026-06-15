/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CF99C
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$16 @ 0x18006FB90 (_CPlaybackNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$53 @ 0x18006FCC0 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$53.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$85 @ 0x18006FD40 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$85.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$55 @ 0x18006FDF0 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$55.c)
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::catch$57 @ 0x1800709C4 (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--catch$57.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$81 @ 0x180071280 (_CAudioResourceManager--DestroyStream_--_1_--catch$81.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$64 @ 0x180072F80 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$64.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch$57 @ 0x1800D94F3 (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--catch$57.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$9 @ 0x1800F008A (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$9.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$15 @ 0x1800F0412 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$15.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$16 @ 0x1800FBC18 (_CCaptureNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x1800FBDAB (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800CA598 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
