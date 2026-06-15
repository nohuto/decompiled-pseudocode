/*
 * XREFs of AudioServerGetDevicePeriod @ 0x1800021B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180002428 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002580 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180002678 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  int ConnectorFormatForProcessingMode; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _GUID v13; // xmm6
  int *v14; // rbx
  void *v15; // rcx
  WINBOOL fPending[2]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-88h] BYREF
  struct CEndpointCharacteristics *v19; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v20; // [rsp+98h] [rbp-70h] BYREF
  _BYTE pv[56]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-28h]
  __int128 v23; // [rsp+F0h] [rbp-18h] BYREF

  v22 = *(_OWORD *)a3;
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v19 = 0LL;
  ConnectorFormatForProcessingMode = ValidateVadServerSettings(a3);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    ConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                         g_pEndpointCharacteristicsCache,
                                         a2,
                                         0LL,
                                         0LL,
                                         &v19);
    if ( ConnectorFormatForProcessingMode >= 0 )
    {
      if ( !a5 )
        goto LABEL_11;
      v10 = *((unsigned int *)a3 + 24);
      v11 = *((unsigned int *)a3 + 4);
      v12 = *((unsigned int *)a3 + 6);
      Context = 0LL;
      ConnectorFormatForProcessingMode = DeriveAudioProcessingModeConfiguration(v11, v12, v10);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v15 = 0LL;
      }
      else
      {
        v13 = v20;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                             v19,
                                             eHostProcessConnector,
                                             &v20,
                                             (struct tWAVEFORMATEX **)&Context);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v15 = Context;
        }
        else
        {
          v14 = (int *)Context;
          v20 = v13;
          ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                               v19,
                                               0LL,
                                               Context,
                                               &v20,
                                               0,
                                               fPending,
                                               0LL,
                                               0LL,
                                               0LL);
          v15 = v14;
          if ( ConnectorFormatForProcessingMode >= 0 )
          {
            *a5 = (unsigned int)(int)((double)fPending[0] * 10000000.0 / (double)v14[1] + 0.5);
            CoTaskMemFree(v14);
LABEL_11:
            if ( a6 )
              ConnectorFormatForProcessingMode = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v19, v9, a6);
LABEL_13:
            if ( ConnectorFormatForProcessingMode >= 0 )
              goto LABEL_14;
            goto LABEL_20;
          }
        }
      }
      CoTaskMemFree(v15);
      goto LABEL_13;
    }
  }
LABEL_20:
  AudSrvTraceLoggingErrorHelper("AudioServerGetDevicePeriod", 0x1040u, ConnectorFormatForProcessingMode);
LABEL_14:
  if ( v19 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v19 + 16LL))(v19);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v23);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
