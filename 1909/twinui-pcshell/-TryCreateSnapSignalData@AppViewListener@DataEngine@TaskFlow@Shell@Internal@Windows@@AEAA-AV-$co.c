/*
 * XREFs of ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x18021904C
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1802191B0 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x180072B64 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18007F128 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x18021721C (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x18021A50C (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
struct IApplicationView *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // rax
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationView *v15; // [rsp+68h] [rbp+10h]
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v14 = a1;
  v13[1] = -2LL;
  v10 = 0LL;
  LOWORD(v14) = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a4, a2);
  if ( WindowForView )
  {
    v12 = WindowForView;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v13[0] = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v8 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData(
                      &SystemTimeAsFileTime,
                      a3,
                      v13[0],
                      v12,
                      v10);
    v9 = *v8;
    *v8 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&SystemTimeAsFileTime);
    TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
      (int *)&v16,
      v13,
      (__int64)&v12);
    LOBYTE(v14) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v14);
    v10 = 0LL;
    *(_QWORD *)a2 = v9;
  }
  else
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    BYTE1(v14) = 1;
    *(_QWORD *)a2 = 0LL;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v14);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return a2;
}
