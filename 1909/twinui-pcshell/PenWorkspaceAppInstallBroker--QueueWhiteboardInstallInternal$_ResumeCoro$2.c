/*
 * XREFs of PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x1800A2960
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800A27C4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x180027DDC (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x180056618 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x18009BD44 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___ @ 0x1800A102C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview--.c)
 *     ??$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PEAVWeakRef@01@@Z @ 0x1800A1180 (--$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PE.c)
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_ @ 0x1800A16A4 (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--_lambda_89fb5ab193d74e8b0300aa0759d904c8_.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800A1DE8 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@0_N1@Z @ 0x1800A3DF8 (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1800A3E8C (-StatusChanged@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@U.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A3F48 (-await_ready@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@App.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A3FD4 (-await_resume@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@Ap.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A4050 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A408C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A41C4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x1800A42FC (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLaunche.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18011EC90 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??IWeakRef@WRL@Microsoft@@QEAA?AV?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@12@XZ @ 0x18016D34C (--IWeakRef@WRL@Microsoft@@QEAA-AV-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@12@XZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 *v3; // rax
  unsigned int v4; // eax
  struct IServiceProvider *v5; // rdx
  struct IProfferService *v6; // r8
  struct IServiceProvider *v7; // rdx
  struct IProfferService *v8; // r8
  struct IProfferService *v9; // r8
  char v10; // [rsp+20h] [rbp-4B8h]
  char v11; // [rsp+28h] [rbp-4B0h]
  char v12; // [rsp+3Ah] [rbp-49Eh]
  _QWORD *v13; // [rsp+D8h] [rbp-400h]
  Microsoft::WRL::WeakRef *v14; // [rsp+1E0h] [rbp-2F8h]
  __int64 v15; // [rsp+320h] [rbp-1B8h]
  IApplicationViewChangeListener *v16; // [rsp+3F8h] [rbp-E0h]
  IApplicationViewChangeListener *v17; // [rsp+410h] [rbp-C8h]
  _UNKNOWN *retaddr; // [rsp+4D8h] [rbp+0h]

  *(_WORD *)(a1 + 512) = *(_WORD *)(a1 + 8);
  switch ( --*(_WORD *)(a1 + 512) )
  {
    case 0:
    case 2:
      goto LABEL_19;
    case 1:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 528), a2, a3);
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 528) + 80LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 80),
        (_QWORD *)(*(_QWORD *)(a1 + 528) + 72LL));
      *(_QWORD *)(a1 + 384) = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                                v13,
                                (_QWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 80));
      *(_QWORD *)(a1 + 400) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                (_QWORD *)(a1 + 112),
                                *(_QWORD *)(a1 + 384));
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 400);
      *(_BYTE *)(a1 + 416) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_ready(*(_QWORD *)(a1 + 72));
      if ( !*(_BYTE *)(a1 + 416) )
      {
        *(_QWORD *)(a1 + 120) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                   (_QWORD *)(a1 + 128),
                                   a1);
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend(
          *(_QWORD *)(a1 + 72),
          *(_QWORD *)(a1 + 120));
        return;
      }
      *(_DWORD *)(a1 + 304) = 0;
LABEL_7:
      *(_BYTE *)(a1 + 432) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_resume(*(_QWORD *)(a1 + 72));
      v12 = *(_BYTE *)(a1 + 432);
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(a1 + 16);
      if ( !v12 )
        goto LABEL_16;
      memset((void *)(a1 + 24), 0, 8uLL);
      v14 = Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)(a1 + 24));
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 144),
        v14);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 176),
        (_QWORD *)(*(_QWORD *)(a1 + 528) + 72LL));
      v11 = 0;
      v10 = 0;
      *(_QWORD *)(a1 + 448) = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
                                *(_QWORD *)(a1 + 528) + 80LL,
                                a1 + 32,
                                a1 + 176,
                                a1 + 144,
                                v10,
                                v11);
      *(_QWORD *)(a1 + 464) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                (_QWORD *)(a1 + 208),
                                *(_QWORD *)(a1 + 448));
      *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 464);
      *(_BYTE *)(a1 + 480) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_ready(*(_QWORD *)(a1 + 136));
      if ( *(_BYTE *)(a1 + 480) )
      {
        *(_DWORD *)(a1 + 320) = 0;
LABEL_13:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_resume(
          *(_QWORD *)(a1 + 136),
          a1 + 40);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(a1 + 32);
        winrt::hstring::~hstring((winrt::hstring *)(a1 + 24));
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)(a1 + 48));
        v15 = Microsoft::WRL::WeakRef::operator&(a1 + 48, a1 + 232);
        v3 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v15);
        v4 = Microsoft::WRL::AsWeak<PenWorkspaceAppInstallBroker>(
               *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 528),
               v3);
        *(_DWORD *)(a1 + 496) = wil::verify_hresult<long>(v4);
        *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 496);
        *(_QWORD *)(a1 + 376) = retaddr;
        if ( *(int *)(a1 + 368) < 0 )
          wil::details::in1diag3::Throw_Hr(
            *(wil::details::in1diag3 **)(a1 + 376),
            62LL,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\appinstallbroker.cpp",
            (const char *)*(unsigned int *)(a1 + 368));
        *(_QWORD *)(a1 + 64) = a1 + 240;
        *(_QWORD *)(a1 + 352) = lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_(
                                  *(_QWORD **)(a1 + 64),
                                  *(_QWORD *)(a1 + 528),
                                  (__int64 *)(a1 + 48));
        winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___(
          (_QWORD *)(a1 + 56),
          *(_QWORD **)(a1 + 352));
        winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::StatusChanged(
          a1 + 40,
          a1 + 256,
          a1 + 56);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((_QWORD *)(a1 + 56));
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 48));
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(a1 + 40);
LABEL_16:
        v16 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        winrt::immersive_shell_component::publish_services(v16, v5, v6);
        v17 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        *(_QWORD *)(a1 + 264) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::get_return_object(
                                  v17,
                                  a1 + 272);
        if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 264)) )
        {
          *(_DWORD *)(a1 + 336) = 0;
          winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 264), v7, v8);
LABEL_19:
          winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x218);
        }
        else
        {
          *(_QWORD *)(a1 + 280) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 288),
                                     a1);
          *(_WORD *)(a1 + 8) = 0;
          winrt::immersive_shell_component::publish_services(
            *(winrt::immersive_shell_component **)(a1 + 264),
            *(struct IServiceProvider **)(a1 + 280),
            v9);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 216) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                   (_QWORD *)(a1 + 224),
                                   a1);
        *(_WORD *)(a1 + 8) = 6;
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_suspend(
          *(_QWORD *)(a1 + 136),
          *(_QWORD *)(a1 + 216));
      }
      return;
    case 3:
      *(_DWORD *)(a1 + 304) = 0;
      goto LABEL_7;
    case 4:
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(a1 + 16);
      goto LABEL_19;
    case 5:
      *(_DWORD *)(a1 + 320) = 0;
      goto LABEL_13;
    case 6:
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(a1 + 32);
      winrt::hstring::~hstring((winrt::hstring *)(a1 + 24));
      goto LABEL_19;
    default:
      __debugbreak();
      return;
  }
}
