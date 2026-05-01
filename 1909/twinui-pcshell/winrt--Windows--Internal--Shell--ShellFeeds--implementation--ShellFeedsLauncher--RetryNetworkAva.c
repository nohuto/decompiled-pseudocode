/*
 * XREFs of winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800C35A4
 * Callers:
 *     ?RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1800C4258 (-RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x180056618 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800A3F2C (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@imp.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x1800A42FC (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLaunche.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__InitCoro_1(
        int *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4)
{
  struct IProfferService *v4; // r8
  _BYTE v5[8]; // [rsp+20h] [rbp-58h] BYREF
  IApplicationViewChangeListener *v6; // [rsp+28h] [rbp-50h]
  _QWORD *v7; // [rsp+30h] [rbp-48h]
  IApplicationViewChangeListener *v8; // [rsp+38h] [rbp-40h]
  struct IServiceProvider *v9; // [rsp+40h] [rbp-38h]
  winrt::immersive_shell_component *v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF

  v11 = -2LL;
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_ConstructPromise(
    (__int64)a2,
    (__int64)winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2,
    *a1);
  v7 = a2 + 34;
  v6 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::get_return_object(
    (__int64)v6,
    v5);
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
    v7,
    a4);
  v8 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::get_return_object(
    (__int64)v8,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 34)) )
  {
    winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2(a2);
  }
  else
  {
    v10 = (winrt::immersive_shell_component *)(a2 + 34);
    v9 = (struct IServiceProvider *)*std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                       &v12,
                                       (__int64)a2);
    winrt::immersive_shell_component::publish_services(v10, v9, v4);
  }
}
