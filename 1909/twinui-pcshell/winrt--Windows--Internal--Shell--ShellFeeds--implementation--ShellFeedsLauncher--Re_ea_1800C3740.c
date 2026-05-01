/*
 * XREFs of winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800C35A4 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x180056618 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x1800A42FC (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLaunche.c)
 *     ??$?0HX@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z @ 0x1800BF31C (--$-0HX@-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1800BF3BC (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824 (--1resume_after@winrt@@QEAA@XZ.c)
 *     ??__Lwinrt@@YA?AUresume_after@0@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1800C0978 (--__Lwinrt@@YA-AUresume_after@0@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SAXAEBUevent_token@5@@Z @ 0x1800C1004 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SAXAEBUevent_tok.c)
 *     ?ShellFeedsLauncher_NetworkStatusChangeListenerStopped@ShellFeedsTelemetry@@SAXXZ @ 0x1800C44CC (-ShellFeedsLauncher_NetworkStatusChangeListenerStopped@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?await_ready@resume_after@winrt@@QEBA_NXZ @ 0x1800C4954 (-await_ready@resume_after@winrt@@QEBA_NXZ.c)
 *     ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964 (-await_suspend@resume_after@winrt@@QEAAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18011EC90 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  ShellFeedsAvailability *v3; // rcx
  unsigned __int8 *v4; // r9
  struct IServiceProvider *v5; // rdx
  struct IProfferService *v6; // r8
  struct IServiceProvider *v7; // rdx
  struct IProfferService *v8; // r8
  struct IProfferService *v9; // r8
  IApplicationViewChangeListener *v10; // [rsp+238h] [rbp-A0h]
  IApplicationViewChangeListener *v11; // [rsp+250h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+2D8h] [rbp+0h]

  *(_WORD *)(a1 + 256) = *(_WORD *)(a1 + 8);
  switch ( --*(_WORD *)(a1 + 256) )
  {
    case 0:
    case 2:
      goto LABEL_14;
    case 1:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 272), a2, a3);
      *(_QWORD *)(a1 + 48) = a1 + 40;
      *(_QWORD *)(a1 + 192) = std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
                                (_QWORD *)(a1 + 56),
                                (int *)&unk_1804A6900);
      *(_QWORD *)(a1 + 224) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                *(_QWORD **)(a1 + 48),
                                *(_QWORD **)(a1 + 192));
      *(_QWORD *)(a1 + 208) = winrt::operator co_await((_QWORD *)(a1 + 16), **(_QWORD **)(a1 + 224));
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 208);
      if ( winrt::resume_after::await_ready(*(winrt::resume_after **)(a1 + 32)) )
      {
        *(_DWORD *)(a1 + 128) = 0;
LABEL_7:
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 32), a2, a3);
        winrt::resume_after::~resume_after((winrt::resume_after *)(a1 + 16));
        *(_BYTE *)(a1 + 80) = 1;
        *(_BYTE *)(a1 + 81) = 0;
        LOBYTE(v3) = 1;
        *(_DWORD *)(a1 + 160) = ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
                                  v3,
                                  (unsigned __int8)a1 + 80,
                                  (unsigned __int8 *)(a1 + 81),
                                  v4);
        *(_DWORD *)(a1 + 144) = wil::verify_hresult<long>(*(unsigned int *)(a1 + 160));
        *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 240) = retaddr;
        if ( *(int *)(a1 + 120) < 0 )
          wil::details::in1diag3::_Log_Hr(
            *(wil::details::in1diag3 **)(a1 + 240),
            (void *)0x80,
            (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
            (const char *)*(unsigned int *)(a1 + 120));
        if ( !*(_BYTE *)(a1 + 80) )
        {
          ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStopped();
          SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
          winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged((const struct winrt::event_token *)(*(_QWORD *)(a1 + 272) + 104LL));
        }
        v10 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        winrt::immersive_shell_component::publish_services(v10, v5, v6);
        v11 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        *(_QWORD *)(a1 + 88) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::get_return_object(
                                 (__int64)v11,
                                 (_BYTE *)(a1 + 96));
        if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 88)) )
        {
          *(_DWORD *)(a1 + 176) = 0;
          winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 88), v7, v8);
LABEL_14:
          winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x118);
        }
        else
        {
          *(_QWORD *)(a1 + 104) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 112),
                                     a1);
          *(_WORD *)(a1 + 8) = 0;
          winrt::immersive_shell_component::publish_services(
            *(winrt::immersive_shell_component **)(a1 + 88),
            *(struct IServiceProvider **)(a1 + 104),
            v9);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 64) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 72),
                                  a1);
        *(_WORD *)(a1 + 8) = 4;
        winrt::resume_after::await_suspend(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 64));
      }
      return;
    case 3:
      *(_DWORD *)(a1 + 128) = 0;
      goto LABEL_7;
    case 4:
      winrt::resume_after::~resume_after((winrt::resume_after *)(a1 + 16));
      goto LABEL_14;
    default:
      __debugbreak();
      return;
  }
}
