/*
 * XREFs of PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800955D4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 * Callees:
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@@23@PEAX@Z @ 0x18000F7C4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstal.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1_Ref_count_base@std@@UEAA@XZ @ 0x18001D190 (--1_Ref_count_base@std@@UEAA@XZ.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18001D84C (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180084510 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___ @ 0x180093D4C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview--.c)
 *     ??$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PEAVWeakRef@01@@Z @ 0x180093EA0 (--$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PE.c)
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_ @ 0x18009447C (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--_lambda_89fb5ab193d74e8b0300aa0759d904c8_.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094690 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800946D8 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x180094BF8 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@0_N1@Z @ 0x180096C78 (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x180096D0C (-StatusChanged@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@U.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180096DC8 (-await_ready@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@App.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x180096E54 (-await_resume@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@Ap.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180096ED0 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180096F0C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180097044 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x18009717C (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppIn.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800FFC70 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??IWeakRef@WRL@Microsoft@@QEAA?AV?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@12@XZ @ 0x18014E0E4 (--IWeakRef@WRL@Microsoft@@QEAA-AV-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@12@XZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414 (--1hstring@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // eax
  char v3; // [rsp+20h] [rbp-4B8h]
  char v4; // [rsp+28h] [rbp-4B0h]
  char v5; // [rsp+3Ah] [rbp-49Eh]
  _QWORD *v6; // [rsp+D8h] [rbp-400h]
  Microsoft::WRL::WeakRef *v7; // [rsp+1E0h] [rbp-2F8h]
  __int64 v8; // [rsp+320h] [rbp-1B8h]
  IApplicationViewChangeListener *v9; // [rsp+3F8h] [rbp-E0h]
  IApplicationViewChangeListener *v10; // [rsp+410h] [rbp-C8h]
  _UNKNOWN *retaddr; // [rsp+4D8h] [rbp+0h]

  *(_WORD *)(a1 + 512) = *(_WORD *)(a1 + 8);
  switch ( --*(_WORD *)(a1 + 512) )
  {
    case 0:
    case 2:
      goto LABEL_19;
    case 1:
      std::_Ref_count_base::~_Ref_count_base((std::_Ref_count_base *)(a1 + 528));
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 528) + 80LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 80),
        (_QWORD *)(*(_QWORD *)(a1 + 528) + 72LL));
      *(_QWORD *)(a1 + 384) = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                                v6,
                                (_QWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 80));
      *(_QWORD *)(a1 + 400) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
                                (_QWORD *)(a1 + 112),
                                *(_QWORD *)(a1 + 384));
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 400);
      *(_BYTE *)(a1 + 416) = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::await_ready(*(_QWORD *)(a1 + 72));
      if ( !*(_BYTE *)(a1 + 416) )
      {
        *(_QWORD *)(a1 + 120) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
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
      v5 = *(_BYTE *)(a1 + 432);
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a1 + 16));
      if ( !v5 )
        goto LABEL_16;
      memset((void *)(a1 + 24), 0, 8uLL);
      v7 = Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)(a1 + 24));
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 144),
        v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        (_QWORD *)(a1 + 176),
        (_QWORD *)(*(_QWORD *)(a1 + 528) + 72LL));
      v4 = 0;
      v3 = 0;
      *(_QWORD *)(a1 + 448) = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
                                *(_QWORD *)(a1 + 528) + 80LL,
                                a1 + 32,
                                a1 + 176,
                                a1 + 144,
                                v3,
                                v4);
      *(_QWORD *)(a1 + 464) = std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
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
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a1 + 32));
        winrt::hstring::~hstring((winrt::hstring *)(a1 + 24));
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)(a1 + 48));
        v8 = Microsoft::WRL::WeakRef::operator&(a1 + 48, a1 + 232);
        v1 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v8);
        v2 = Microsoft::WRL::AsWeak<PenWorkspaceAppInstallBroker>(
               *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 528),
               v1);
        *(_DWORD *)(a1 + 496) = wil::verify_hresult<long>(v2);
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
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a1 + 40));
LABEL_16:
        v9 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        std::_Ref_count_base::~_Ref_count_base(v9);
        v10 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        *(_QWORD *)(a1 + 264) = std::experimental::coroutine_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::promise_type::get_return_object(
                                  v10,
                                  a1 + 272);
        if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 264)) )
        {
          *(_DWORD *)(a1 + 336) = 0;
          std::_Ref_count_base::~_Ref_count_base(*(std::_Ref_count_base **)(a1 + 264));
LABEL_19:
          std::_Ref_count_base::~_Ref_count_base((std::_Ref_count_base *)a1);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x218);
        }
        else
        {
          *(_QWORD *)(a1 + 280) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 288),
                                     a1);
          *(_WORD *)(a1 + 8) = 0;
          std::_Ref_count_base::~_Ref_count_base(*(std::_Ref_count_base **)(a1 + 264));
        }
      }
      else
      {
        *(_QWORD *)(a1 + 216) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
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
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a1 + 16));
      goto LABEL_19;
    case 5:
      *(_DWORD *)(a1 + 320) = 0;
      goto LABEL_13;
    case 6:
      winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>((_QWORD *)(a1 + 32));
      winrt::hstring::~hstring((winrt::hstring *)(a1 + 24));
      goto LABEL_19;
    default:
      __debugbreak();
      return;
  }
}
