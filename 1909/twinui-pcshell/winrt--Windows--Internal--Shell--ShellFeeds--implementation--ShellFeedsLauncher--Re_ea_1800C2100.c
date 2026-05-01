/*
 * XREFs of winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x1800C1F6C (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x180056618 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x1800A42FC (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLaunche.c)
 *     ??$?0HX@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z @ 0x1800BF31C (--$-0HX@-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z.c)
 *     winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___ @ 0x1800BF32C (winrt--Windows--Networking--Connectivity--NetworkStatusChangedEventHandler--NetworkStatusChanged.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1800BF3BC (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824 (--1resume_after@winrt@@QEAA@XZ.c)
 *     ??__Lwinrt@@YA?AUresume_after@0@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1800C0978 (--__Lwinrt@@YA-AUresume_after@0@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA?AUevent_token@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1800C0FDC (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA-AUevent_token.c)
 *     ?ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ @ 0x1800C443C (-ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?await_ready@resume_after@winrt@@QEBA_NXZ @ 0x1800C4954 (-await_ready@resume_after@winrt@@QEBA_NXZ.c)
 *     ?await_suspend@resume_after@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800C4964 (-await_suspend@resume_after@winrt@@QEAAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18011EC90 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  const char *v3; // r9
  unsigned int v4; // eax
  unsigned __int8 *v5; // r9
  struct IServiceProvider *v6; // rdx
  struct IProfferService *v7; // r8
  struct IServiceProvider *v8; // rdx
  struct IProfferService *v9; // r8
  struct IProfferService *v10; // r8
  IApplicationViewChangeListener *v11; // [rsp+480h] [rbp-B8h]
  IApplicationViewChangeListener *v12; // [rsp+498h] [rbp-A0h]
  _UNKNOWN *retaddr; // [rsp+538h] [rbp+0h]

  *(_WORD *)(a1 + 384) = *(_WORD *)(a1 + 8);
  switch ( --*(_WORD *)(a1 + 384) )
  {
    case 0:
    case 2:
      goto LABEL_30;
    case 1:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 448), a2, a3);
      *(_QWORD *)(a1 + 56) = a1 + 48;
      *(_DWORD *)(a1 + 72) = 1;
      *(_QWORD *)(a1 + 352) = std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
                                (_QWORD *)(a1 + 64),
                                (int *)(a1 + 72));
      *(_QWORD *)(a1 + 320) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                *(_QWORD **)(a1 + 56),
                                *(_QWORD **)(a1 + 352));
      *(_QWORD *)(a1 + 336) = winrt::operator co_await((_QWORD *)(a1 + 16), **(_QWORD **)(a1 + 320));
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 336);
      if ( !winrt::resume_after::await_ready(*(winrt::resume_after **)(a1 + 40)) )
      {
        *(_QWORD *)(a1 + 80) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 88),
                                  a1);
        *(_WORD *)(a1 + 8) = 4;
        winrt::resume_after::await_suspend(*(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 80));
        return;
      }
      *(_DWORD *)(a1 + 176) = 0;
LABEL_7:
      winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 40), a2, a3);
      winrt::resume_after::~resume_after((winrt::resume_after *)(a1 + 16));
      *(_DWORD *)(a1 + 96) = 4;
      break;
    case 3:
      *(_DWORD *)(a1 + 176) = 0;
      goto LABEL_7;
    case 4:
      winrt::resume_after::~resume_after((winrt::resume_after *)(a1 + 16));
      goto LABEL_30;
    default:
      __debugbreak();
      return;
  }
  while ( 1 )
  {
    *(_DWORD *)(a1 + 216) = RegOpenKeyExW(
                              HKEY_CURRENT_USER,
                              L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
                              0,
                              0x20019u,
                              (PHKEY)(a1 + 104));
    if ( *(int *)(a1 + 216) > 0 )
      *(_DWORD *)(a1 + 288) = (unsigned __int16)*(_DWORD *)(a1 + 216) | 0x80070000;
    else
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(a1 + 216);
    *(_DWORD *)(a1 + 304) = wil::verify_hresult<long>(*(unsigned int *)(a1 + 288));
    *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 240) = retaddr;
    if ( *(int *)(a1 + 208) < 0 )
      wil::details::in1diag3::_Log_Hr(
        *(wil::details::in1diag3 **)(a1 + 240),
        (void *)0x9C,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
        (const char *)*(unsigned int *)(a1 + 208));
    if ( *(int *)(a1 + 208) < 0 )
      break;
    *(_QWORD *)(a1 + 112) = CreateEventW(0LL, 1, 0, 0LL);
    *(_QWORD *)(a1 + 248) = retaddr;
    if ( !*(_QWORD *)(a1 + 112) )
      wil::details::in1diag3::_Log_GetLastError(
        *(wil::details::in1diag3 **)(a1 + 248),
        (void *)0xA1,
        (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
        v3);
    if ( !*(_QWORD *)(a1 + 112) )
      break;
    v4 = RegNotifyChangeKeyValue(*(HKEY *)(a1 + 104), 1, *(_DWORD *)(a1 + 96), *(HANDLE *)(a1 + 112), 1);
    *(_DWORD *)(a1 + 368) = wil::verify_hresult<long>(v4);
    *(_DWORD *)(a1 + 224) = *(_DWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 256) = retaddr;
    if ( *(int *)(a1 + 224) < 0 )
      wil::details::in1diag3::_Log_Hr(
        *(wil::details::in1diag3 **)(a1 + 256),
        (void *)0xA2,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
        (const char *)*(unsigned int *)(a1 + 224));
    if ( *(int *)(a1 + 224) < 0 )
      break;
    WaitForSingleObject(*(HANDLE *)(a1 + 112), 0xFFFFFFFF);
    *(_BYTE *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 121) = 0;
    *(_DWORD *)(a1 + 432) = ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
                              0LL,
                              (unsigned __int8)a1 + 120,
                              (unsigned __int8 *)(a1 + 121),
                              v5);
    *(_DWORD *)(a1 + 416) = wil::verify_hresult<long>(*(unsigned int *)(a1 + 432));
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 264) = retaddr;
    if ( *(int *)(a1 + 232) < 0 )
      wil::details::in1diag3::_Log_Hr(
        *(wil::details::in1diag3 **)(a1 + 264),
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
        (const char *)*(unsigned int *)(a1 + 232));
    if ( !*(_BYTE *)(a1 + 121) )
    {
      if ( *(_BYTE *)(a1 + 120) )
      {
        ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStarted();
        *(_QWORD *)(a1 + 400) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 128),
                                  *(_QWORD *)(a1 + 448));
        winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___(
          (_QWORD *)(a1 + 32),
          **(_QWORD **)(a1 + 400));
        *(_QWORD *)(a1 + 272) = winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(a1 + 32);
        *(_QWORD *)(*(_QWORD *)(a1 + 448) + 104LL) = *(_QWORD *)(a1 + 272);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((_QWORD *)(a1 + 32));
      }
      RegCloseKey(*(HKEY *)(a1 + 104));
      break;
    }
  }
  v11 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  winrt::immersive_shell_component::publish_services(v11, v6, v7);
  v12 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  *(_QWORD *)(a1 + 136) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::get_return_object(
                            (__int64)v12,
                            (_BYTE *)(a1 + 144));
  if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 136)) )
  {
    *(_DWORD *)(a1 + 192) = 0;
    winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 136), v8, v9);
LABEL_30:
    winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
    if ( *(_WORD *)(a1 + 10) )
      operator delete((void *)a1, (const struct std::nothrow_t *)0x1C8);
  }
  else
  {
    *(_QWORD *)(a1 + 152) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                               (_QWORD *)(a1 + 160),
                               a1);
    *(_WORD *)(a1 + 8) = 0;
    winrt::immersive_shell_component::publish_services(
      *(winrt::immersive_shell_component **)(a1 + 136),
      *(struct IServiceProvider **)(a1 + 152),
      v10);
  }
}
