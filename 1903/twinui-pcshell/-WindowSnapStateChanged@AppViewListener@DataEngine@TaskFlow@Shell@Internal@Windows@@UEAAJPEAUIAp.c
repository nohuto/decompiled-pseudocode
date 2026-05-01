/*
 * XREFs of ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1801FA0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18007CC98 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801F8240 (--0-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAA@XZ @ 0x1801F854C (--1WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAA@XZ.c)
 *     ?SnapSignalDataNotCreated@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXXZ @ 0x1801F94B8 (-SnapSignalDataNotCreated@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z @ 0x1801F97C8 (-StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801F9964 (-Stop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1801F9F8C (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r8d
  struct IApplicationView *SnapSignalData; // rax
  __int64 v9; // rbx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-188h] BYREF
  __int64 v14[3]; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v15[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v14[1] = -2LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
  v15[0] = &TaskFlowDataEngineTelemetry::WindowSnapStateChanged::`vftable';
  try
  {
    TaskFlowDataEngineTelemetry::WindowSnapStateChanged::StartActivity(
      (TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v15,
      a3);
    v14[0] = 0LL;
    if ( a3 == 1 )
    {
      v7 = 0;
    }
    else
    {
      if ( a3 )
      {
        wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v15,
          -2147467263);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14);
        TaskFlowDataEngineTelemetry::WindowSnapStateChanged::~WindowSnapStateChanged((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v15);
        return 2147500033LL;
      }
      v7 = 1;
    }
    SnapSignalData = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
                       v6,
                       (struct IApplicationView *)&v13,
                       v7,
                       a2);
    v14[0] = *(_QWORD *)SnapSignalData;
    v9 = v14[0];
    *(_QWORD *)SnapSignalData = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
    if ( v9 )
    {
      LOWORD(v13) = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), v9);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          184LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v10);
      LOBYTE(v13) = 1;
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v13);
    }
    else
    {
      TaskFlowDataEngineTelemetry::WindowSnapStateChanged::SnapSignalDataNotCreated((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v15);
    }
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v15,
      0);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14);
    TaskFlowDataEngineTelemetry::WindowSnapStateChanged::~WindowSnapStateChanged((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v11);
  }
  return result;
}
