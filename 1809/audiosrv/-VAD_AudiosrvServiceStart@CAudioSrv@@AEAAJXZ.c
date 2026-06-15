/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180057C60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18000C280 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18005773C (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005C0BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005C450 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18005C7BC (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005CD94 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005D298 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18005DEE4 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005E6A0 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005E7B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18005F244 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005F2F4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18005F3C8 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?IsSurfaceHub@@YA_NXZ @ 0x18005F750 (-IsSurfaceHub@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800ADD68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800AF4B8 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AFCB0 (--4-$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B3754 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  CPolicyConfig *v2; // rax
  struct wil::details::IFunctorHost *v3; // r8
  CAudioHealthMonitor *v4; // rax
  signed int AudioSessionManagerProvider; // ebx
  unsigned int v6; // r8d
  const char *v7; // r9
  LSTATUS ValueW; // eax
  DWORD v9; // ecx
  _QWORD *v10; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  const char *v14; // r9
  RPC_STATUS v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+28h] [rbp-E0h]
  DWORD pvData[2]; // [rsp+48h] [rbp-C0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IAudioPolicyManager *v25; // [rsp+60h] [rbp-A8h] BYREF
  DWORD *v26; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-98h] BYREF
  DiagnosticsInfo v28; // [rsp+80h] [rbp-88h] BYREF
  const char *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  __int16 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  _BYTE v33[8]; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v34; // [rsp+B0h] [rbp-58h]
  _BYTE v35[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+CCh] [rbp-3Ch]
  wchar_t String[32]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v32 = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids);
  }
  v2 = (CPolicyConfig *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v2;
  if ( v2 )
    v2 = CPolicyConfig::CPolicyConfig(v2);
  g_PolicyConfig = v2;
  if ( !v2 )
  {
    v17 = 2285LL;
LABEL_40:
    AudioSessionManagerProvider = -2147024882;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider,
      v21);
    return (unsigned int)AudioSessionManagerProvider;
  }
  g_bIsSurfaceHub = IsSurfaceHub();
  pvData[1] = 4;
  pvData[0] = 5;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         pvData,
         &pvData[1]) )
  {
    v26 = pvData;
    v28 = (DiagnosticsInfo)retaddr;
    v29 = "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp";
    v30 = 0LL;
    v31 = 2297;
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportUsageToService();
    v27[0] = off_180157950;
    v27[1] = &v26;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v35, 0xF4D82Du, &v28);
    wil::details::RunFunctor((wil::details *)v27, (struct wil::details::IFunctor *)v35, v3);
    if ( v36 )
      *(_DWORD *)(v36 + 16) = v37;
  }
  if ( pvData[0] )
  {
    v4 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v25 = v4;
    if ( v4 )
      v4 = CAudioHealthMonitor::CAudioHealthMonitor(v4, pvData[0]);
    g_AudioHealthMonitor = v4;
    if ( !v4 )
    {
      v17 = 2310LL;
      goto LABEL_40;
    }
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2315LL;
    goto LABEL_42;
  }
  if ( !g_pVolumeProvider )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x90C, v6, v7);
    __debugbreak();
  }
  AudioSessionManagerProvider = (*(__int64 (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2317LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2320LL;
    goto LABEL_42;
  }
  pvData[1] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             pvData,
             &pvData[1]);
  v9 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v9 = pvData[0];
  g_AudioSrvWatchDogTimerInMs = v9;
  memset_0(String, 0, sizeof(String));
  pcbData[0] = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          pcbData)
    && _wtof(String) != 0.0 )
  {
    v18 = std::make_shared<CVolumeUnit,>(v33);
    std::shared_ptr<CVolumeUnit>::operator=(v19, v18);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    v21 = LODWORD(FLOAT_1_5);
    CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator);
  }
  AudioSessionManagerProvider = InitializeDeviceGraphManager();
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2341LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2343LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2348LL;
    goto LABEL_42;
  }
  v10 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v10[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  v25 = g_PolicyManager;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                  v12,
                                  &v25);
  if ( AudioSessionManagerProvider < 0 )
  {
    v17 = 2351LL;
    goto LABEL_42;
  }
  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893"
          "335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    if ( !SecurityDescriptor )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x933, v13, v14);
      __debugbreak();
    }
    if ( ServerEndpointIsStarted(L"AudioClientRpc") )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids);
      }
    }
    else
    {
      v15 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
      if ( v15 )
      {
        v20 = 2370LL;
        goto LABEL_62;
      }
    }
    v21 = 1234;
    v15 = RpcServerRegisterIf3(&unk_18014A200, 0LL, 0LL, 33LL);
    if ( !v15 )
    {
      *((_DWORD *)this + 25) = 1;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids);
      }
      AudioSessionManagerProvider = 0;
      goto LABEL_34;
    }
    v20 = 2377LL;
LABEL_62:
    AudioSessionManagerProvider = v15 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider,
      v21);
LABEL_34:
    LocalFree(SecurityDescriptor);
    return (unsigned int)AudioSessionManagerProvider;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x932,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
           v14);
}
