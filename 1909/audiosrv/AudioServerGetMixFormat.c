/*
 * XREFs of AudioServerGetMixFormat @ 0x180037550
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x1800035F4 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800087EC (McTemplateU0zqttq.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180037CAC (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180037CD0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180037E2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18005E2A8 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180067E40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CAX_NW4Rep.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const wchar_t *a2, struct VadServerSettings *a3, _QWORD *a4)
{
  void *v6; // rbx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v10; // rbx
  struct VadServerSettings *v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int MixFormat; // edi
  BOOL v15; // edx
  struct _GUID v16; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // edx
  void *v18; // rdx
  struct wil::details::IFunctorHost *v19; // r8
  bool v20; // di
  void *v21; // rdx
  void *v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v26; // rcx
  void *v27; // rax
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  CEndpointCharacteristics *v29; // [rsp+80h] [rbp-88h] BYREF
  void *Src; // [rsp+88h] [rbp-80h] BYREF
  struct VadServerSettings *v31; // [rsp+90h] [rbp-78h] BYREF
  LPVOID v32; // [rsp+98h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+B0h] [rbp-58h] BYREF
  void **p_Src; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v37; // [rsp+C0h] [rbp-48h] BYREF
  char v38; // [rsp+C8h] [rbp-40h]
  LPVOID *v39; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX *v40; // [rsp+D8h] [rbp-30h] BYREF
  char v41; // [rsp+E0h] [rbp-28h]
  _QWORD pv[2]; // [rsp+E8h] [rbp-20h] BYREF
  DWORD v43; // [rsp+F8h] [rbp-10h]
  const wchar_t *v44; // [rsp+100h] [rbp-8h]
  void *v45; // [rsp+108h] [rbp+0h]
  char v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+114h] [rbp+Ch]
  _QWORD v48[2]; // [rsp+120h] [rbp+18h] BYREF
  DiagnosticsInfo v49; // [rsp+130h] [rbp+28h] BYREF
  const char *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int16 v52; // [rsp+148h] [rbp+40h]
  _QWORD v53[7]; // [rsp+150h] [rbp+48h] BYREF
  struct _GUID v54; // [rsp+188h] [rbp+80h] BYREF
  struct _GUID v55; // [rsp+198h] [rbp+90h] BYREF
  struct _GUID v56; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v57[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  int v59; // [rsp+1CCh] [rbp+C4h]
  struct _GUID v60[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _GUID v61; // [rsp+200h] [rbp+F8h] BYREF
  DiagnosticsInfo retaddr; // [rsp+260h] [rbp+158h]
  __int64 v63; // [rsp+268h] [rbp+160h] BYREF

  v63 = a1;
  v31 = a3;
  v60[1] = *(struct _GUID *)a3;
  v61 = *(struct _GUID *)a3;
  EtwEventActivityIdControl(4LL, &v61);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v45 = v6;
  v43 = CurrentThreadId;
  v44 = L"AudioServerGetMixFormat";
  v46 = 0;
  v47 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v10 = 0LL;
  Src = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      (__int64)v31,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)v31 + 12),
      *((_DWORD *)v31 + 14),
      *((_DWORD *)v31 + 17),
      *((_DWORD *)v31 + 13));
  v11 = v31;
  *a4 = 0LL;
  LODWORD(v28) = ValidateVadServerSettings(v11);
  MixFormat = v28;
  if ( (int)v28 >= 0 )
  {
    LODWORD(v28) = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                     g_pEndpointCharacteristicsCache,
                     a2,
                     0LL,
                     0LL,
                     &v29);
    MixFormat = v28;
    if ( (int)v28 >= 0 )
    {
      v10 = *((_QWORD *)v29 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v15 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v29 + 56LL))(v29) == 1;
      LODWORD(v28) = DeriveAudioProcessingModeConfiguration(
                       *((_DWORD *)v31 + 12),
                       *((_DWORD *)v31 + 14),
                       *((_DWORD *)v31 + 32),
                       v29,
                       v15,
                       0,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v31 + 13),
                       0,
                       0,
                       0LL,
                       v60,
                       &v54,
                       0LL);
      MixFormat = v28;
      if ( (int)v28 >= 0 )
      {
        p_Src = &Src;
        v16 = v54;
        v55 = v54;
        v17 = *((_DWORD *)v31 + 13);
        v37 = 0LL;
        v38 = 1;
        MixFormat = CEndpointCharacteristics::GetMixFormat(v29, v17, &v55, &v37);
        LODWORD(v28) = MixFormat;
        if ( v38 )
        {
          v12 = (int)p_Src;
          v18 = *p_Src;
          *p_Src = v37;
          if ( v18 )
            CoTaskMemFree(v18);
          MixFormat = v28;
        }
        if ( MixFormat >= 0 )
        {
          v53[0] = &v31;
          v53[1] = &v29;
          v53[2] = &Src;
          v53[3] = &v28;
          v53[4] = v60;
          v53[5] = &v63;
          v49 = retaddr;
          v50 = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
          v52 = 3786;
          v51 = 0LL;
          wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::ReportUsageToService();
          v48[0] = off_18015C3D8;
          v48[1] = v53;
          wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v57, 0xFD9AE8u, &v49);
          wil::details::RunFunctor((wil::details *)v48, (struct wil::details::IFunctor *)v57, v19);
          v12 = v58;
          if ( v58 )
            *(_DWORD *)(v58 + 16) = v59;
          MixFormat = v28;
          if ( (int)v28 >= 0 )
          {
            v39 = &v32;
            v56 = v16;
            v40 = 0LL;
            v41 = 1;
            v20 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                    v29,
                    *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v31 + 13),
                    &v56,
                    &v40) >= 0
               && v32;
            if ( v41 )
            {
              v21 = *v39;
              *v39 = v40;
              if ( v21 )
                CoTaskMemFree(v21);
            }
            if ( v20 )
            {
              v26 = Src;
              v27 = v32;
              v32 = 0LL;
              Src = v27;
              if ( v26 )
                CoTaskMemFree(v26);
            }
            v22 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
            *a4 = v22;
            if ( v22 )
            {
              memcpy_0(v22, Src, *((unsigned __int16 *)Src + 8) + 18LL);
              MixFormat = v28;
            }
            else
            {
              MixFormat = -2147024882;
              LODWORD(v28) = -2147024882;
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    McTemplateU0(v12, (int)"|", v13);
    MixFormat = v28;
  }
  if ( MixFormat < 0 )
  {
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3853, MixFormat);
    MixFormat = v28;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v29 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v29 + 16LL))(v29);
  v23 = v32;
  v32 = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  v24 = Src;
  Src = 0LL;
  if ( v24 )
    CoTaskMemFree(v24);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v61);
  return (unsigned int)MixFormat;
}
