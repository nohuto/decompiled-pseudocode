/*
 * XREFs of AudioServerIsFormatSupported @ 0x180011CE0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800E8170 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McTemplateU0 @ 0x1800035F4 (McTemplateU0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0zqttq @ 0x1800087EC (McTemplateU0zqttq.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180010E54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18001EE88 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180036FFC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800370E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtte.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180037A7C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18004463C (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x1800446BC (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     swprintf_s @ 0x180065E4C (swprintf_s.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180067E30 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDAAC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800DE3B8 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800E420C (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800E4780 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800E5580 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int128 *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  void *v10; // rbx
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int KSFormatFromWFXFormat; // edi
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  HRESULT v19; // eax
  int v20; // ebx
  LSTATUS v21; // eax
  int v22; // eax
  struct IMMDevice *v23; // rbx
  __int64 v24; // rdx
  char v25; // di
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rdi
  struct tWAVEFORMATEX *v29; // rax
  struct tWAVEFORMATEX *v30; // r14
  int v31; // eax
  int v32; // r15d
  int v33; // eax
  struct _GUID *v34; // r8
  void *v35; // rdx
  unsigned int v36; // eax
  HKEY v37; // rcx
  HKEY v38; // rcx
  int v39; // eax
  int v40; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v41; // edx
  void *v42; // rcx
  __int64 v43; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // edx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  int v48; // r15d
  int v49; // r12d
  int v50; // eax
  int AcceptableSPDIFTypeForDevice; // eax
  int v52; // eax
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  struct _GUID *phkResult; // [rsp+20h] [rbp-E0h]
  WINBOOL *phkResulta; // [rsp+20h] [rbp-E0h]
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL fPending[2]; // [rsp+78h] [rbp-88h] BYREF
  CEndpointCharacteristics *v61; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v62; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID v63; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  DWORD v65; // [rsp+C0h] [rbp-40h]
  const wchar_t *v66; // [rsp+C8h] [rbp-38h]
  void *v67; // [rsp+D0h] [rbp-30h]
  char v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+DCh] [rbp-24h]
  char v70[24]; // [rsp+E8h] [rbp-18h] BYREF
  void **p_Context; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v72[12]; // [rsp+108h] [rbp+8h] BYREF
  int v73; // [rsp+114h] [rbp+14h]
  struct _FILETIME pftDueTime[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v75; // [rsp+130h] [rbp+30h]
  __int128 v76; // [rsp+140h] [rbp+40h]
  __int128 v77; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Buffer[264]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  v6 = *a4;
  *(_QWORD *)&v63.Data1 = a2;
  *(_QWORD *)&v62.Data1 = a1;
  v76 = v6;
  v77 = v6;
  EtwEventActivityIdControl(4LL, &v77);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v67 = v10;
  v65 = CurrentThreadId;
  v66 = L"AudioServerIsFormatSupported";
  v68 = 0;
  v69 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v13,
      (int)&AudioSrv_IsFormatSupported_Task_Start,
      a2,
      *((_DWORD *)a4 + 12),
      *((_DWORD *)a4 + 14),
      *((_DWORD *)a4 + 17),
      *((_DWORD *)a4 + 13));
  if ( !a3 && !a6 )
  {
    KSFormatFromWFXFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF33,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_146;
  }
  if ( *((_DWORD *)a4 + 12) >= 0x15u )
  {
    v18 = 1321LL;
LABEL_33:
    KSFormatFromWFXFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF35,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_146;
  }
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = a4[1];
  if ( *(_QWORD *)pftDueTime != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || *(_QWORD *)&pftDueTime[1] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    Context = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &Context,
      0LL);
    v19 = StringFromCLSID((const IID *const)pftDueTime, (LPOLESTR *)&Context);
    v20 = v19;
    if ( v19 >= 0 )
    {
      if ( swprintf_s(
             Buffer,
             0x104uLL,
             L"%s\\%s",
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
             Context) == -1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007007ALL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Context);
        v18 = 1323LL;
        goto LABEL_33;
      }
      *(_QWORD *)fPending = 0LL;
      v21 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, (PHKEY)fPending);
      v20 = v21;
      if ( v21 >= 0 )
      {
        if ( *(_QWORD *)fPending )
          RegCloseKey(*(HKEY *)fPending);
        if ( Context )
          CoTaskMemFree(Context);
        goto LABEL_31;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x520,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v21);
      if ( *(_QWORD *)fPending )
        RegCloseKey(*(HKEY *)fPending);
      if ( Context )
        CoTaskMemFree(Context);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v19);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Context);
    }
    if ( v20 < 0 )
    {
      v18 = 1323LL;
      goto LABEL_33;
    }
  }
LABEL_31:
  if ( !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13)) )
  {
    v18 = 1325LL;
    goto LABEL_33;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( *Src == 0xFFFE && Src[8] < 0x16u )
  {
    KSFormatFromWFXFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF3C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_146;
  }
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v61);
  KSFormatFromWFXFormat = v22;
  if ( v22 >= 0 )
  {
    v23 = (struct IMMDevice *)*((_QWORD *)v61 + 2);
    ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->AddRef)(v23);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      KSFormatFromWFXFormat = -2004287480;
      v24 = 3912LL;
LABEL_141:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)KSFormatFromWFXFormat);
      goto LABEL_142;
    }
    if ( !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61) && Src[1] > 2u )
    {
      v25 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState();
        v25 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data;
        if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        {
          wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState();
          v25 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data;
        }
      }
      LOBYTE(fPending[1]) = 3;
      LODWORD(Context) = 0;
      WORD2(Context) = fPending[1];
      fPending[0] = 2;
      v26 = v25 & 0x30;
      v27 = wil_details_RecordUsageInPropertyCache(
              v70,
              &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data,
              1LL,
              0LL);
      *(_OWORD *)&pftDueTime[0].dwLowDateTime = *(_OWORD *)v27;
      v75 = *(_QWORD *)(v27 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        g_wil_details_recordFeatureUsage(
          11831216LL,
          1LL,
          1LL,
          &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data,
          pftDueTime);
        if ( v26 == 32 )
        {
          p_Context = 0LL;
          v73 = (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
          *(_QWORD *)&v72[4] = 0LL;
          *(_DWORD *)v72 = 1;
          g_wil_details_recordFeatureUsage(11831216LL, 1LL, 1LL, 0LL, &p_Context);
        }
      }
      if ( !(_DWORD)v75 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xB487B0u,
          (const struct FEATURE_LOGGED_TRAITS *)&Context,
          0LL,
          1,
          (const enum wil_ReportingKind *)fPending,
          0LL,
          0,
          1uLL);
    }
    v28 = Src[8];
    v29 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v28 + 18);
    v30 = v29;
    if ( !v29 )
    {
      KSFormatFromWFXFormat = -2147024882;
      v24 = 3922LL;
      goto LABEL_141;
    }
    memcpy_0(v29, Src, v28 + 18);
    if ( *((_DWORD *)a4 + 13) == 1 )
    {
      Context = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&Context);
      v31 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager + 32LL))(
              g_PolicyManager,
              *(_QWORD *)&v62.Data1,
              &Context);
      KSFormatFromWFXFormat = v31;
      if ( v31 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)Context + 144LL))(
               Context,
               *((unsigned int *)a4 + 12),
               0LL) )
        {
          v32 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 120LL))(Context);
          v33 = DeriveAudioProcessingModeConfiguration(
                  *((unsigned int *)a4 + 12),
                  *((unsigned int *)a4 + 14),
                  *((unsigned int *)a4 + 32),
                  v61,
                  0,
                  a3,
                  1,
                  0,
                  0,
                  pftDueTime,
                  &v62,
                  &p_Context,
                  0LL);
          KSFormatFromWFXFormat = v33;
          if ( v33 >= 0 )
          {
            p_Context = (void **)fPending;
            *(_QWORD *)fPending = 0LL;
            *(_QWORD *)v72 = 0LL;
            v72[8] = 1;
            KSFormatFromWFXFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                                      v61,
                                      v30,
                                      v34,
                                      &v62,
                                      phkResult,
                                      (struct tWAVEFORMATEX **)v72);
            if ( v72[8] )
            {
              v35 = *p_Context;
              *p_Context = *(void **)v72;
              if ( v35 )
                CoTaskMemFree(v35);
            }
            if ( KSFormatFromWFXFormat >= 0 )
            {
              v62 = *(struct _GUID *)&pftDueTime[0].dwLowDateTime;
              v36 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61);
              if ( (unsigned int)AreResourcesAvailableForStream(
                                   *(_QWORD *)&v63.Data1,
                                   v36,
                                   &v62,
                                   *((unsigned int *)a4 + 13),
                                   *((_DWORD *)a4 + 12),
                                   v32) )
              {
                v38 = *(HKEY *)fPending;
                *(_QWORD *)fPending = 0LL;
                if ( v38 )
                  CoTaskMemFree(v38);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
                KSFormatFromWFXFormat = 0;
                CoTaskMemFree(v30);
                goto LABEL_142;
              }
              KSFormatFromWFXFormat = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF7A,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)0x88890008LL);
            }
            v37 = *(HKEY *)fPending;
            *(_QWORD *)fPending = 0LL;
            if ( v37 )
              CoTaskMemFree(v37);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
            CoTaskMemFree(v30);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF70,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v33);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
            CoTaskMemFree(v30);
          }
        }
        else
        {
          KSFormatFromWFXFormat = 1;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
          CoTaskMemFree(v30);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF57,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v31);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
        CoTaskMemFree(v30);
      }
LABEL_142:
      if ( v23 )
        ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->Release)(v23);
      goto LABEL_144;
    }
    if ( a3 )
    {
      v48 = IsExclusiveModeDisabled(v23) == 0;
      v49 = IsOffloadDisabled(v23);
      if ( v49 && !v48 )
        goto LABEL_116;
      if ( g_PolicyManager )
      {
        Context = 0LL;
        v50 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager
                                                                                        + 32LL))(
                g_PolicyManager,
                *(_QWORD *)&v62.Data1,
                &Context);
        KSFormatFromWFXFormat = v50;
        if ( v50 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFB9,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v50);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
          CoTaskMemFree(v30);
          goto LABEL_142;
        }
        if ( v48 )
          v48 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)Context + 144LL))(
                  Context,
                  *((unsigned int *)a4 + 12),
                  1LL);
        if ( !v49 && (*(unsigned int (__fastcall **)(LPVOID))(*(_QWORD *)Context + 88LL))(Context) )
          v49 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)Context + 144LL))(
                  Context,
                  *((unsigned int *)a4 + 12),
                  0LL) == 0;
        if ( Context )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
      }
      if ( !v48 )
      {
LABEL_116:
        KSFormatFromWFXFormat = -2004287474;
        CoTaskMemFree(v30);
        goto LABEL_142;
      }
      if ( (unsigned int)IsSPDIFFormat(v30) && (unsigned int)IsSPDIFEndpoint(v23) )
      {
        AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v23, v30, 0LL, v49);
        KSFormatFromWFXFormat = AcceptableSPDIFTypeForDevice;
        if ( AcceptableSPDIFTypeForDevice < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFCD,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)AcceptableSPDIFTypeForDevice);
          CoTaskMemFree(v30);
          goto LABEL_142;
        }
        goto LABEL_138;
      }
      *(_QWORD *)fPending = 0LL;
      phkResulta = fPending;
      v52 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v23->lpVtbl->Activate)(
              v23,
              &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
              23LL);
      KSFormatFromWFXFormat = v52;
      if ( v52 >= 0 )
      {
        Context = 0LL;
        p_Context = &Context;
        *(_QWORD *)v72 = 0LL;
        v72[8] = 1;
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v30, (struct KSDATAFORMAT_WAVEFORMATEX **)v72);
        if ( v72[8] )
        {
          v53 = *p_Context;
          *p_Context = *(void **)v72;
          if ( v53 )
            CoTaskMemFree(v53);
        }
        if ( KSFormatFromWFXFormat >= 0 )
        {
          pftDueTime[0] = 0LL;
          LODWORD(phkResulta) = v49;
          if ( (*(int (__fastcall **)(_QWORD, LPVOID, _QWORD, _QWORD, WINBOOL *, struct _FILETIME *))(**(_QWORD **)fPending + 80LL))(
                 *(_QWORD *)fPending,
                 Context,
                 *(unsigned int *)Context,
                 0LL,
                 phkResulta,
                 pftDueTime) >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)pftDueTime);
            v55 = Context;
            Context = 0LL;
            if ( v55 )
              CoTaskMemFree(v55);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)fPending);
LABEL_138:
            KSFormatFromWFXFormat = 0;
LABEL_139:
            CoTaskMemFree(v30);
            goto LABEL_142;
          }
          KSFormatFromWFXFormat = -2004287480;
          if ( pftDueTime[0] )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pftDueTime + 16LL))(*(_QWORD *)pftDueTime);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFD6,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)KSFormatFromWFXFormat);
        }
        v54 = Context;
        Context = 0LL;
        if ( v54 )
          CoTaskMemFree(v54);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD3,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v52);
      }
      if ( *(_QWORD *)fPending )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
        CoTaskMemFree(v30);
        goto LABEL_142;
      }
      goto LABEL_139;
    }
    v39 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61);
    v40 = DeriveAudioProcessingModeConfiguration(
            *((unsigned int *)a4 + 12),
            *((unsigned int *)a4 + 14),
            *((unsigned int *)a4 + 32),
            v61,
            v39 == 1,
            0,
            *((_DWORD *)a4 + 13),
            0,
            0,
            pftDueTime,
            &v63,
            &v62,
            0LL);
    KSFormatFromWFXFormat = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF92,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v40);
      CoTaskMemFree(v30);
      goto LABEL_142;
    }
    if ( *((_DWORD *)a4 + 17) )
    {
      v44 = *((_DWORD *)a4 + 13);
      p_Context = &Context;
      Context = 0LL;
      *(_QWORD *)v72 = 0LL;
      v72[8] = 1;
      KSFormatFromWFXFormat = DeriveConnectorFormatFromStreamFormat(
                                v61,
                                v44,
                                v30,
                                &v62,
                                &v63,
                                (struct _GUID *)pftDueTime,
                                1,
                                (struct tWAVEFORMATEX **)v72);
      if ( v72[8] )
      {
        v45 = *p_Context;
        *p_Context = *(void **)v72;
        if ( v45 )
          CoTaskMemFree(v45);
      }
      if ( KSFormatFromWFXFormat >= 0 )
      {
        v47 = Context;
        Context = 0LL;
        if ( v47 )
        {
          CoTaskMemFree(v47);
          KSFormatFromWFXFormat = 0;
          CoTaskMemFree(v30);
          goto LABEL_142;
        }
        goto LABEL_138;
      }
      v43 = 4012LL;
    }
    else
    {
      if ( *((_DWORD *)a4 + 33) )
      {
        if ( (v30->wFormatTag != 0xFFFE
           || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v30[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v30[1].wBitsPerSample)
           && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v30[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v30[1].wBitsPerSample))
          && ((v30->wFormatTag - 1) & 0xFFFD) != 0 )
        {
          KSFormatFromWFXFormat = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF9D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x88890008LL);
          CoTaskMemFree(v30);
          goto LABEL_142;
        }
        goto LABEL_138;
      }
      v41 = *((_DWORD *)a4 + 13);
      p_Context = &Context;
      Context = 0LL;
      *(_QWORD *)v72 = 0LL;
      v72[8] = 1;
      KSFormatFromWFXFormat = CEndpointCharacteristics::GetMixFormat(v61, v41, &v62, (struct tWAVEFORMATEX **)v72);
      if ( v72[8] )
      {
        v42 = *p_Context;
        *p_Context = *(void **)v72;
        if ( v42 )
          CoTaskMemFree(v42);
      }
      if ( KSFormatFromWFXFormat >= 0 )
      {
        KSFormatFromWFXFormat = IsStreamFormatSupportedForMixFormat(
                                  v61,
                                  &v63,
                                  *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a4 + 13),
                                  (const struct tWAVEFORMATEX *)Context,
                                  v30,
                                  a6);
        goto LABEL_99;
      }
      v43 = 4003LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)KSFormatFromWFXFormat);
LABEL_99:
    v46 = Context;
    Context = 0LL;
    if ( v46 )
    {
      CoTaskMemFree(v46);
      CoTaskMemFree(v30);
      goto LABEL_142;
    }
    goto LABEL_139;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF41,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v22);
LABEL_144:
  v16 = (int)v61;
  if ( v61 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v61 + 16LL))(v61);
LABEL_146:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v16, (int)&AudioSrv_IsFormatSupported_Task_Stop, v17);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v77);
  return (unsigned int)KSFormatFromWFXFormat;
}
