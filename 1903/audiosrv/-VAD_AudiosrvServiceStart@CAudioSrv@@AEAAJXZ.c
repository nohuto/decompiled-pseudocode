/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005AB64
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005BB20 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800471BC (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18005802C (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005822C (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005855C (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x1800586F0 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x180058DA8 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x180058DEC (--$com_query_to@UIPolicyConfigInternal@@AEAV-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAE.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005A790 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18005B2E4 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005B508 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18005B948 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005B9B4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x18005B9F4 (--$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPolicyConfig@@@12@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180060550 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC738 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800BDE84 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BE6D0 (--4-$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1F14 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  CPolicyConfig **v2; // rax
  CPolicyConfig *v3; // rdx
  CPolicyConfig *v4; // rcx
  __int64 v5; // rcx
  CAudioHealthMonitor *v6; // rax
  CAudioHealthMonitor *v7; // rax
  int LastError; // ebx
  unsigned int v9; // r8d
  const char *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int AudioSessionManagerProvider; // eax
  LSTATUS ValueW; // eax
  DWORD v15; // ecx
  _QWORD *v16; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v18; // rcx
  unsigned int v19; // r8d
  const char *v20; // r9
  RPC_STATUS v21; // ebx
  __int64 v23; // rdx
  struct wil::details::IFunctorHost *v24; // r8
  __int64 v25; // rdx
  double v26; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  PVOID pvData; // [rsp+30h] [rbp-D8h]
  DWORD pcbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  DWORD v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IPolicyConfigInternal *v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  DWORD *v36; // [rsp+70h] [rbp-98h] BYREF
  struct IPolicyConfigInternal *v37; // [rsp+78h] [rbp-90h] BYREF
  struct IAudioPolicyManager *v38; // [rsp+80h] [rbp-88h] BYREF
  CAudioHealthMonitor *v39; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-78h] BYREF
  struct DiagnosticsInfo v41; // [rsp+A0h] [rbp-68h] BYREF
  const char *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  __int16 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  _BYTE v46[8]; // [rsp+C8h] [rbp-40h] BYREF
  std::_Ref_count_base *v47; // [rsp+D0h] [rbp-38h]
  _BYTE v48[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+ECh] [rbp-1Ch]
  wchar_t String[32]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v45 = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
  }
  v2 = (CPolicyConfig **)Microsoft::WRL::Details::Make<CPolicyConfig,>(&v35);
  v3 = 0LL;
  if ( &v39 != v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v4 = g_PolicyConfig;
  g_PolicyConfig = v3;
  if ( v4 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( !g_PolicyConfig )
  {
    v23 = 2158LL;
LABEL_43:
    LastError = -2147024882;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  pcbData[1] = 4;
  pcbData[0] = 5;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         pcbData,
         &pcbData[1]) )
  {
    v36 = pcbData;
    v41 = (struct DiagnosticsInfo)retaddr;
    v42 = "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp";
    v43 = 0LL;
    v44 = 2167;
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportUsageToService();
    v40[0] = off_18015D520;
    v40[1] = &v36;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v48, 0xF4D82Du, &v41);
    wil::details::RunFunctor((wil::details *)v40, (struct wil::details::IFunctor *)v48, v24);
    if ( v49 )
      *(_DWORD *)(v49 + 16) = v50;
  }
  if ( pcbData[0] )
  {
    v6 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v39 = v6;
    v7 = v6 ? CAudioHealthMonitor::CAudioHealthMonitor(v6, pcbData[0]) : 0LL;
    g_AudioHealthMonitor = v7;
    if ( !v7 )
    {
      v23 = 2180LL;
      goto LABEL_43;
    }
  }
  LastError = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  if ( LastError < 0 )
  {
    v23 = 2185LL;
    goto LABEL_45;
  }
  if ( !g_pVolumeProvider )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x88A, v9, v10);
    goto LABEL_51;
  }
  LastError = (*(__int64 (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( LastError < 0 )
  {
    v23 = 2187LL;
    goto LABEL_45;
  }
  v34 = 0LL;
  wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>(v11, (__int64)&v34);
  v37 = v34;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &>(
                                  v12,
                                  &v37);
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_51:
    v25 = 2192LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider);
    goto LABEL_37;
  }
  pcbData[1] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             pcbData,
             &pcbData[1]);
  v15 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v15 = pcbData[0];
  g_AudioSrvWatchDogTimerInMs = v15;
  memset_0(String, 0, sizeof(String));
  v33[0] = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          v33) )
  {
    v26 = _wtof(String);
    if ( v26 != 0.0 )
    {
      v27 = std::make_shared<CVolumeUnit,>(v46);
      std::shared_ptr<CVolumeUnit>::operator=(v28, v27);
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      HIDWORD(pvData) = HIDWORD(v26);
      CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator);
    }
  }
  AudioSessionManagerProvider = InitializeDeviceGraphManager();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v25 = 2213LL;
    goto LABEL_60;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v25 = 2215LL;
    goto LABEL_60;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v25 = 2220LL;
    goto LABEL_60;
  }
  v16 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v16[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  v38 = g_PolicyManager;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                  v18,
                                  &v38);
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v25 = 2223LL;
    goto LABEL_60;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x8B2,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
                  v20);
    goto LABEL_37;
  }
  if ( !SecurityDescriptor )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x8B3, v19, v20);
    __debugbreak();
  }
  if ( ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
    }
  }
  else
  {
    v21 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    if ( v21 )
    {
      v29 = 2242LL;
      goto LABEL_69;
    }
  }
  LODWORD(pvData) = 0;
  v21 = RpcServerRegisterIf3(&unk_180151590, 0LL, 0LL, 33LL, 1234, pvData, AudioSrvRpcIfCallback, SecurityDescriptor);
  if ( !v21 )
  {
    *((_DWORD *)this + 25) = 1;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
    }
    LastError = 0;
    goto LABEL_36;
  }
  v29 = 2249LL;
LABEL_69:
  LastError = v21 | 0x80010000;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
    (const char *)(unsigned int)LastError);
LABEL_36:
  LocalFree(SecurityDescriptor);
LABEL_37:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
  return (unsigned int)LastError;
}
