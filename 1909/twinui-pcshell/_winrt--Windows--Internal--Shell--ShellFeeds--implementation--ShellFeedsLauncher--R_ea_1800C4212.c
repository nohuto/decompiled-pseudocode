/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::catch$55 @ 0x1800C4212
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2_::_1_::catch_55(
        __int64 a1,
        __int64 a2)
{
  struct IServiceProvider *v3; // rdx
  struct IProfferService *v4; // r8

  *(_QWORD *)(a2 + 576) = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 736));
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 576), v3, v4);
  return &loc_1800C3F68;
}
