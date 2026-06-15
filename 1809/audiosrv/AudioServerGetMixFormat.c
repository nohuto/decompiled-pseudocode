/*
 * XREFs of AudioServerGetMixFormat @ 0x18000BC00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180005078 (McTemplateU0zqttq.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18000C280 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C2A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180012558 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800636E0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180064898 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D8B8C (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18010D3C8 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const wchar_t *a2, _OWORD *a3, _QWORD *a4)
{
  void *v6; // rbx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int MixFormat; // edi
  struct tWAVEFORMATEX *v13; // rcx
  int v14; // r8d
  int (*v15)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v16; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // edx
  _QWORD *v18; // rsi
  struct tWAVEFORMATEX *v19; // r14
  wil::details_abi *v20; // rcx
  bool v21; // dl
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v23; // r8
  bool v24; // r14
  _QWORD *v25; // rdi
  struct tWAVEFORMATEX *v26; // rsi
  struct tWAVEFORMATEX *v27; // rcx
  void *v28; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+78h] [rbp-90h] BYREF
  WINBOOL fPending; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int16 v33; // [rsp+80h] [rbp-88h]
  CEndpointCharacteristics *v34; // [rsp+88h] [rbp-80h] BYREF
  _OWORD *v35; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v37; // [rsp+A0h] [rbp-68h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v39; // [rsp+ACh] [rbp-5Ch]
  LPVOID Context; // [rsp+B0h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+B8h] [rbp-50h] BYREF
  void **p_Src; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *v43; // [rsp+C8h] [rbp-40h] BYREF
  char v44; // [rsp+D0h] [rbp-38h]
  LPVOID *v45; // [rsp+D8h] [rbp-30h]
  struct tWAVEFORMATEX *v46; // [rsp+E0h] [rbp-28h] BYREF
  char v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  void **v49; // [rsp+F8h] [rbp-10h] BYREF
  struct wil::details_abi::ThreadLocalData *v50; // [rsp+100h] [rbp-8h]
  int v51; // [rsp+108h] [rbp+0h]
  int v52; // [rsp+10Ch] [rbp+4h]
  _QWORD *v53; // [rsp+110h] [rbp+8h]
  int v54; // [rsp+118h] [rbp+10h]
  _QWORD pv[2]; // [rsp+120h] [rbp+18h] BYREF
  DWORD v56; // [rsp+130h] [rbp+28h]
  const wchar_t *v57; // [rsp+138h] [rbp+30h]
  void *v58; // [rsp+140h] [rbp+38h]
  char v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+14Ch] [rbp+44h]
  struct _GUID v61; // [rsp+158h] [rbp+50h]
  _QWORD v62[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v63[3]; // [rsp+178h] [rbp+70h] BYREF
  __int16 v64; // [rsp+190h] [rbp+88h]
  _QWORD v65[6]; // [rsp+198h] [rbp+90h] BYREF
  struct _GUID v66; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _GUID v67; // [rsp+1D8h] [rbp+D0h] BYREF
  char v68; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v69; // [rsp+1F8h] [rbp+F0h]
  __int128 v70; // [rsp+208h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]
  __int64 v72; // [rsp+278h] [rbp+170h] BYREF

  v72 = a1;
  v35 = a3;
  v69 = *a3;
  v70 = *a3;
  EtwEventActivityIdControl(4LL, &v70);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v58 = v6;
  v56 = CurrentThreadId;
  v57 = L"AudioServerGetMixFormat";
  v59 = 0;
  v60 = 0LL;
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
  v31 = 0;
  Src = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      (__int64)v35,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)v35 + 4),
      *((_DWORD *)v35 + 6),
      *((_DWORD *)v35 + 9),
      *((_DWORD *)v35 + 5));
  v11 = (__int64)v35;
  *a4 = 0LL;
  if ( *(_DWORD *)(v11 + 16) < 0x15u )
  {
    if ( (unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v11 + 20)) )
    {
      v31 = 0;
      v31 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
              g_pEndpointCharacteristicsCache,
              a2,
              0LL,
              0LL,
              &v34);
      MixFormat = v31;
      if ( v31 >= 0 )
      {
        v48 = *((_QWORD *)v34 + 2);
        v10 = v48;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v31 = DeriveAudioProcessingModeConfiguration(
                *((unsigned int *)v35 + 4),
                *((unsigned int *)v35 + 6),
                *((unsigned int *)v35 + 24));
        MixFormat = v31;
        if ( v31 >= 0 )
        {
          p_Src = &Src;
          v16 = v61;
          v17 = *((_DWORD *)v35 + 5);
          v43 = 0LL;
          v44 = 1;
          v66 = v61;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v34, v17, &v66, v15, &v43);
          v31 = MixFormat;
          if ( v44 )
          {
            v18 = p_Src;
            v19 = v43;
            v13 = (struct tWAVEFORMATEX *)*p_Src;
            if ( v43 != *p_Src )
            {
              if ( v13 )
                CoTaskMemFree(v13);
              *v18 = v19;
              MixFormat = v31;
            }
          }
          if ( MixFormat >= 0 )
          {
            v65[0] = &v35;
            v65[1] = &v34;
            v65[2] = &Src;
            v65[3] = &v31;
            v65[4] = &v68;
            v65[5] = &v72;
            v63[0] = retaddr;
            v63[1] = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
            v64 = 3777;
            v63[2] = 0LL;
            if ( (`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetCachedFeatureEnabledState();
            LOBYTE(v33) = 3;
            v38 = 0;
            v39 = v33;
            fPending = 0;
            wil::details::ReportUsageToService(
              &`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data,
              16620264LL,
              &v38,
              1LL,
              3);
            LOBYTE(v20) = 1;
            v62[0] = off_180158000;
            v62[1] = v65;
            v49 = &wil::details::FeatureFunctorHost::`vftable';
            ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v20, v21);
            v50 = ThreadLocalDataCache;
            if ( ThreadLocalDataCache )
            {
              v52 = *((_DWORD *)ThreadLocalDataCache + 4);
              v10 = v48;
              v16 = v61;
              v51 = **((_DWORD **)ThreadLocalDataCache + 1);
              *((_DWORD *)ThreadLocalDataCache + 4) = v51;
            }
            v54 = 16620264;
            v53 = v63;
            wil::details::RunFunctor((wil::details *)v62, (struct wil::details::IFunctor *)&v49, v23);
            v13 = (struct tWAVEFORMATEX *)v50;
            if ( v50 )
              *((_DWORD *)v50 + 4) = v52;
            MixFormat = v31;
            if ( v31 >= 0 )
            {
              if ( g_bIsSurfaceHub )
              {
                v45 = &v37;
                v46 = 0LL;
                v47 = 1;
                v67 = v16;
                v24 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                        v34,
                        *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v35 + 5),
                        &v67,
                        &v46) >= 0;
                if ( v47 )
                {
                  v25 = v45;
                  v26 = v46;
                  v27 = (struct tWAVEFORMATEX *)*v45;
                  if ( v46 != *v45 )
                  {
                    if ( v27 )
                      CoTaskMemFree(v27);
                    *v25 = v26;
                  }
                }
                if ( v24 && v37 )
                  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
                    &Src,
                    &v37);
              }
              v28 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
              *a4 = v28;
              if ( v28 )
              {
                memcpy_0(v28, Src, *((unsigned __int16 *)Src + 8) + 18LL);
                MixFormat = v31;
              }
              else
              {
                MixFormat = -2147024882;
                v31 = -2147024882;
              }
            }
          }
        }
      }
    }
    else
    {
      MixFormat = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x527,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070057LL,
        v30);
      v31 = -2147024809;
    }
  }
  else
  {
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x526,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v30);
    v31 = -2147024809;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    McTemplateU0((__int64)v13, (int)&AudioSrv_GetMixFormat_Task_Stop, v14);
    MixFormat = v31;
  }
  if ( MixFormat < 0 )
  {
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3850, MixFormat);
    MixFormat = v31;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v34 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v37 )
    CoTaskMemFree(v37);
  if ( Src )
    CoTaskMemFree(Src);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v70);
  return (unsigned int)MixFormat;
}
