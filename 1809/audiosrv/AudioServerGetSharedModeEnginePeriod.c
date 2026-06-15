/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800DCEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180002678 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800DB628 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX *Src,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int128 v9; // xmm0
  __int64 v14; // r8
  void *v15; // r8
  int *v16; // rbx
  int IsFormatSupported; // edi
  struct _GUID v18; // xmm6
  int v19; // eax
  int *v20; // r12
  int *v21; // r15
  int v22; // edx
  DWORD nSamplesPerSec; // r8d
  int v24; // edx
  int v25; // eax
  int *v26; // r9
  int v27; // eax
  _DWORD *v28; // r9
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v31; // [rsp+78h] [rbp-88h] BYREF
  WINBOOL fPending[2]; // [rsp+80h] [rbp-80h] BYREF
  int *v33; // [rsp+88h] [rbp-78h]
  struct _GUID v34; // [rsp+90h] [rbp-70h] BYREF
  int *v35; // [rsp+A0h] [rbp-60h]
  int *v36; // [rsp+A8h] [rbp-58h]
  struct _GUID v37; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v38; // [rsp+C0h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v40; // [rsp+108h] [rbp+8h]
  __int128 v41; // [rsp+118h] [rbp+18h] BYREF

  v9 = *a3;
  v36 = a7;
  v35 = a8;
  v33 = a9;
  v40 = v9;
  v41 = v9;
  EtwEventActivityIdControl(4LL, &v41);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v15);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v14,
    (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod");
  v16 = 0LL;
  v31 = 0LL;
  Context = 0LL;
  *(_QWORD *)fPending = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_12;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, a3, &Src->wFormatTag, (struct tWAVEFORMATEX **)fPending);
  if ( IsFormatSupported < 0 )
    goto LABEL_12;
  IsFormatSupported = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                        g_pEndpointCharacteristicsCache,
                        a2,
                        0LL,
                        0LL,
                        &v31);
  if ( IsFormatSupported < 0 )
    goto LABEL_12;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *((_DWORD *)a3 + 4),
                        *((_DWORD *)a3 + 6),
                        *((_DWORD *)a3 + 24),
                        v31,
                        *((_DWORD *)v31 + 39) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                        0,
                        0,
                        &v37,
                        &v38,
                        &v34,
                        0LL);
  if ( IsFormatSupported < 0 )
    goto LABEL_12;
  v18 = v37;
  v19 = DeriveConnectorFormatFromStreamFormat(
          v31,
          *((_DWORD *)a3 + 5),
          Src,
          &v34,
          &v38,
          &v37,
          *((_DWORD *)a3 + 9),
          (struct tWAVEFORMATEX **)&Context);
  v16 = (int *)Context;
  IsFormatSupported = v19;
  if ( v19 < 0
    || (v20 = v35,
        v21 = v36,
        v22 = *((_DWORD *)a3 + 5),
        v34 = v18,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (__int64)v31,
                              v22,
                              (unsigned __int16 *)Context,
                              &v34,
                              a5 != 0,
                              a6,
                              v36,
                              v35,
                              v33),
        IsFormatSupported < 0) )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("AudioServerGetSharedModeEnginePeriod", 4244, IsFormatSupported);
  }
  else
  {
    nSamplesPerSec = Src->nSamplesPerSec;
    v24 = v16[1];
    if ( nSamplesPerSec != v24 )
    {
      *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v24, nSamplesPerSec);
      *v21 = TranslateFrameCountBetweenSamplingRates(*v21, v16[1], Src->nSamplesPerSec);
      v25 = TranslateFrameCountBetweenSamplingRates(*v20, v16[1], Src->nSamplesPerSec);
      v26 = v33;
      *v20 = v25;
      v27 = TranslateFrameCountBetweenSamplingRates(*v26, v16[1], Src->nSamplesPerSec);
      *v28 = v27;
    }
  }
  CoTaskMemFree(v16);
  operator delete(*(void **)fPending, (const struct std::nothrow_t *)0x12);
  if ( v31 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v31 + 16LL))(v31);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v41);
  return (unsigned int)IsFormatSupported;
}
