/*
 * XREFs of ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x180089CF0 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x180089D20 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180089DDC (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x180089DF8 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x180089FF4 (__scrt_uninitialize_crt.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800A27C4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x1800C1F6C (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800C35A4 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowWrapper::v_SupportsBack(WindowWrapper *this)
{
  return 1;
}
