/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::catch$59 @ 0x1800C34FC
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks__ResumeCoro_2_::_1_::catch_59(
        __int64 a1,
        __int64 a2)
{
  struct IServiceProvider *v3; // rdx
  struct IProfferService *v4; // r8

  *(_QWORD *)(a2 + 1160) = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 1344));
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 1160), v3, v4);
  return &loc_1800C3218;
}
