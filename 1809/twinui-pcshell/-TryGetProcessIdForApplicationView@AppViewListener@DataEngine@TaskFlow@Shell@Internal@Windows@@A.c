/*
 * XREFs of ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x18008F17C
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008E870 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003DE50 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ??$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18008DD50 (--$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        HWND a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a4)
{
  unsigned int v4; // ebx
  signed int LastError; // eax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+38h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+10h] BYREF
  int v10; // [rsp+64h] [rbp+14h]
  unsigned int v11; // [rsp+78h] [rbp+28h] BYREF

  v10 = HIDWORD(this);
  v8[1] = -2LL;
  dwProcessId = 0;
  v4 = 0;
  v11 = 0;
  if ( a4 )
  {
    v7 = 0LL;
    v8[0] = 0LL;
    if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                a3,
                (struct IApplicationView *)v8,
                (struct IImmersiveApplication **)a3) >= 0 )
    {
      v7 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8[0] + 24LL))(
             v8[0],
             1LL,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             &v7) >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v7 + 48LL))(v7, &dwProcessId);
        v11 = v4;
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
  }
  else
  {
    if ( GetWindowThreadProcessId(a2, &dwProcessId) )
      return dwProcessId;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v11 = v4;
  }
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147023496 )
    TaskFlowDataEngineTelemetry::FailedToRetreiveProcessId<long &>((int *)&v11);
  return dwProcessId;
}
