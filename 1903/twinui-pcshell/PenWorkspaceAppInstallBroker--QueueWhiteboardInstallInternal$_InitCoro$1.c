/*
 * XREFs of PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800955D4
 * Callers:
 *     ?QueueWhiteboardInstallInternal@PenWorkspaceAppInstallBroker@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180096A40 (-QueueWhiteboardInstallInternal@PenWorkspaceAppInstallBroker@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@@23@PEAX@Z @ 0x18000F7C4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstal.c)
 *     ??1_Ref_count_base@std@@UEAA@XZ @ 0x18001D190 (--1_Ref_count_base@std@@UEAA@XZ.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180084510 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SAXPEAX0H@Z @ 0x180096DAC (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstall.c)
 *     ?get_return_object@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@QEBA?AUfire_and_forget@winrt@@XZ @ 0x18009717C (-get_return_object@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppIn.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__InitCoro_1(
        unsigned int *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-58h] BYREF
  IApplicationViewChangeListener *v5; // [rsp+28h] [rbp-50h]
  _QWORD *v6; // [rsp+30h] [rbp-48h]
  IApplicationViewChangeListener *v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  std::_Ref_count_base *v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF

  v10 = -2LL;
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_ConstructPromise(
    a2,
    PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2,
    *a1);
  v6 = a2 + 66;
  v5 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  std::experimental::coroutine_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::promise_type::get_return_object(
    v5,
    v4);
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
    v6,
    a4);
  v7 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  std::experimental::coroutine_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::promise_type::get_return_object(
    v7,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 66)) )
  {
    PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2(a2);
  }
  else
  {
    v9 = (std::_Ref_count_base *)(a2 + 66);
    v8 = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
            &v11,
            (__int64)a2);
    std::_Ref_count_base::~_Ref_count_base(v9);
  }
}
