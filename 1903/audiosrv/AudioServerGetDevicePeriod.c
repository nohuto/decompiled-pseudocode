/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180008510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180008314 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___M_ea_180008314.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180008414 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180010080 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004733C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  int v8; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // edx
  int v12; // eax
  struct _GUID v13; // xmm6
  void *v14; // rcx
  int SharedModeEnginePeriodicity; // eax
  void *v16; // rcx
  int v17; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp-88h] BYREF
  CEndpointCharacteristics *v25[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v26; // [rsp+98h] [rbp-70h] BYREF
  LPVOID *p_Context; // [rsp+A8h] [rbp-60h]
  struct tWAVEFORMATEX *v28; // [rsp+B0h] [rbp-58h] BYREF
  char v29; // [rsp+B8h] [rbp-50h]
  _BYTE pv[56]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+F8h] [rbp-10h]
  __int128 v32; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v31 = *(_OWORD *)a3;
  v32 = v31;
  EtwEventActivityIdControl(4LL, &v32);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v8 = ValidateVadServerSettings(a3);
  ConnectorFormatForProcessingMode = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFFF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_19;
  }
  v25[0] = 0LL;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL,
                                          v25);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4098LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode);
    goto LABEL_18;
  }
  if ( !a5 )
    goto LABEL_15;
  v12 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v25[0] + 56LL))(v25[0]);
  MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                          *((unsigned int *)a3 + 12),
                                          *((unsigned int *)a3 + 14),
                                          *((unsigned int *)a3 + 32),
                                          v25[0],
                                          v12 == 1,
                                          0,
                                          0,
                                          0,
                                          0,
                                          &v26,
                                          0LL,
                                          0LL,
                                          0LL);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4119LL;
    goto LABEL_28;
  }
  v13 = v26;
  p_Context = &Context;
  Context = 0LL;
  v28 = 0LL;
  v29 = 1;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       v25[0],
                                       eHostProcessConnector,
                                       &v26,
                                       &v28);
  if ( v29 )
  {
    v14 = *p_Context;
    *p_Context = v28;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v20 = (unsigned int)ConnectorFormatForProcessingMode;
    v21 = 4123LL;
    goto LABEL_25;
  }
  v26 = v13;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  v25[0],
                                  0LL,
                                  Context,
                                  &v26,
                                  0,
                                  &fPending,
                                  0LL,
                                  0LL,
                                  0LL);
  ConnectorFormatForProcessingMode = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v20 = (unsigned int)SharedModeEnginePeriodicity;
    v21 = 4127LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v20);
    v22 = Context;
    Context = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    goto LABEL_18;
  }
  v16 = Context;
  v17 = *((_DWORD *)Context + 1);
  Context = 0LL;
  *a5 = (unsigned int)(int)((double)fPending * 10000000.0 / (double)v17 + 0.5);
  if ( v16 )
    CoTaskMemFree(v16);
LABEL_15:
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                            v25[0],
                                            v11,
                                            a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
      v19 = 4135LL;
      goto LABEL_28;
    }
  }
  ConnectorFormatForProcessingMode = 0;
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v25);
LABEL_19:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v32);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
