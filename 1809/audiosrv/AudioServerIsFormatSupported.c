/*
 * XREFs of AudioServerIsFormatSupported @ 0x1800043B0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DCEF0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180001A3C (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180001ABC (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800026C8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180005078 (McTemplateU0zqttq.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800052C0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1800066C8 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180064898 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800D1950 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800D8FDC (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800D9544 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DA350 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  void *v10; // rbx
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  int v13; // ecx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int MixFormat; // edi
  struct CEndpointCharacteristics *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  struct IMMDevice *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // r14
  int v28; // eax
  int v29; // eax
  struct _GUID *v30; // r8
  struct KSDATAFORMAT_WAVEFORMATEX **v31; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v32; // r12
  struct KSDATAFORMAT_WAVEFORMATEX *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  int (*v37)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v38; // edx
  struct KSDATAFORMAT_WAVEFORMATEX **v39; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v40; // r12
  struct KSDATAFORMAT_WAVEFORMATEX *v41; // rcx
  __int64 v42; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // edx
  struct KSDATAFORMAT_WAVEFORMATEX **v44; // rsi
  struct KSDATAFORMAT_WAVEFORMATEX *v45; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v46; // rcx
  int v47; // r15d
  int v48; // r12d
  int v49; // eax
  int AcceptableSPDIFTypeForDevice; // eax
  int v51; // eax
  struct KSDATAFORMAT_WAVEFORMATEX **v52; // rsi
  struct KSDATAFORMAT_WAVEFORMATEX *v53; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v54; // rcx
  int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+20h] [rbp-E0h]
  struct CEndpointCharacteristics **v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+20h] [rbp-E0h]
  BOOL v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX **v62; // [rsp+20h] [rbp-E0h]
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL fPending[2]; // [rsp+78h] [rbp-88h] BYREF
  struct CEndpointCharacteristics *v65; // [rsp+80h] [rbp-80h] BYREF
  struct _FILETIME *p_pftDueTime; // [rsp+88h] [rbp-78h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v67; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h]
  struct _GUID v69; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID Context[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v71; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+D0h] [rbp-30h] BYREF
  DWORD v73; // [rsp+E0h] [rbp-20h]
  const wchar_t *v74; // [rsp+E8h] [rbp-18h]
  void *v75; // [rsp+F0h] [rbp-10h]
  char v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+FCh] [rbp-4h]
  __int128 v78; // [rsp+108h] [rbp+8h]
  __int128 v79; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v6 = *a4;
  *(_QWORD *)&v71.Data1 = a2;
  *(_QWORD *)&v69.Data1 = a1;
  v78 = v6;
  v79 = v6;
  EtwEventActivityIdControl(4LL, &v79);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context)
    && fPending[0] )
  {
    Context[0] = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context[0] + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v75 = v10;
  v73 = CurrentThreadId;
  v74 = L"AudioServerIsFormatSupported";
  v76 = 0;
  v77 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v13,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      a2,
      *((_DWORD *)a4 + 4),
      *((_DWORD *)a4 + 6),
      *((_DWORD *)a4 + 9),
      *((_DWORD *)a4 + 5));
  if ( !a3 && !a6 )
  {
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF30,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v56);
    goto LABEL_132;
  }
  if ( *((_DWORD *)a4 + 4) >= 0x15u )
  {
    v17 = 1318LL;
LABEL_16:
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v56);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v57);
    goto LABEL_132;
  }
  if ( !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 5)) )
  {
    v17 = 1319LL;
    goto LABEL_16;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( *Src == 0xFFFE && Src[8] < 0x16u )
  {
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF39,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v56);
    goto LABEL_132;
  }
  v65 = 0LL;
  v58 = &v65;
  v18 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL);
  MixFormat = v18;
  if ( v18 >= 0 )
  {
    v19 = (struct IMMDevice *)*((_QWORD *)v65 + 2);
    ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->AddRef)(v19);
    v21 = Src[1];
    if ( (unsigned __int16)v21 > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      MixFormat = -2004287480;
      v22 = 3909LL;
LABEL_127:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat,
        (int)&v65);
      goto LABEL_128;
    }
    if ( !*((_DWORD *)v65 + 39) && (unsigned __int16)v21 > 2u )
    {
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(v21, 0, v20);
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(v23, 2u, v24);
      if ( (g_dwSpatialEndpointQuery & 1) == 0 )
      {
        pftDueTime = 0LL;
        if ( ((int (__fastcall *)(struct IMMDevice *, __int64, struct _FILETIME *))v19->lpVtbl->OpenPropertyStore)(
               v19,
               2LL,
               &pftDueTime) >= 0 )
        {
          p_pftDueTime = (struct _FILETIME *)11;
          v67 = (struct KSDATAFORMAT_WAVEFORMATEX *)0xFFFF;
          v68 = 0LL;
          (*(void (__fastcall **)(struct _FILETIME, void *, struct _FILETIME **))(**(_QWORD **)&pftDueTime + 48LL))(
            pftDueTime,
            &PKEY_SpatialAudioEndpoint_MultiChannelQueried,
            &p_pftDueTime);
        }
        g_dwSpatialEndpointQuery |= 1u;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pftDueTime);
      }
    }
    v25 = Src[8];
    v26 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v25 + 18);
    v27 = v26;
    if ( !v26 )
    {
      MixFormat = -2147024882;
      v22 = 3935LL;
      goto LABEL_127;
    }
    memcpy_0(v26, Src, v25 + 18);
    if ( *((_DWORD *)a4 + 5) == 1 )
    {
      *(_QWORD *)fPending = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(fPending);
      v28 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, WINBOOL *))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL))(
              g_PolicyManager,
              *(_QWORD *)&v69.Data1,
              fPending);
      MixFormat = v28;
      if ( v28 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)fPending + 144LL))(
               *(_QWORD *)fPending,
               *((unsigned int *)a4 + 4),
               0LL) )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 120LL))(*(_QWORD *)fPending);
          LODWORD(v58) = 0;
          v29 = DeriveAudioProcessingModeConfiguration(
                  *((unsigned int *)a4 + 4),
                  *((unsigned int *)a4 + 6),
                  *((unsigned int *)a4 + 24));
          MixFormat = v29;
          if ( v29 >= 0 )
          {
            p_pftDueTime = &pftDueTime;
            pftDueTime = 0LL;
            v67 = 0LL;
            LOBYTE(v68) = 1;
            MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                          v65,
                          v27,
                          v30,
                          &v69,
                          (struct _GUID *)v58,
                          (struct tWAVEFORMATEX **)&v67);
            if ( (_BYTE)v68 )
            {
              v31 = (struct KSDATAFORMAT_WAVEFORMATEX **)p_pftDueTime;
              v32 = v67;
              v33 = (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime;
              if ( v67 != (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime )
              {
                if ( v33 )
                  CoTaskMemFree(v33);
                *v31 = v32;
              }
            }
            if ( MixFormat >= 0 )
            {
              v34 = *((unsigned int *)a4 + 5);
              v35 = *((unsigned int *)v65 + 39);
              v59 = *((_DWORD *)a4 + 4);
              v69 = *(struct _GUID *)Context;
              if ( (unsigned int)AreResourcesAvailableForStream(*(_QWORD *)&v71.Data1, v35, &v69, v34) )
              {
                if ( pftDueTime )
                  CoTaskMemFree(*(LPVOID *)&pftDueTime);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
                MixFormat = 0;
                CoTaskMemFree(v27);
                goto LABEL_128;
              }
              MixFormat = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF87,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)0x88890008LL,
                v59);
            }
            if ( pftDueTime )
              CoTaskMemFree(*(LPVOID *)&pftDueTime);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
            CoTaskMemFree(v27);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF7D,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v29,
              0);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
            CoTaskMemFree(v27);
          }
        }
        else
        {
          MixFormat = 1;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
          CoTaskMemFree(v27);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF64,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v28,
          (int)&v65);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
        CoTaskMemFree(v27);
      }
LABEL_128:
      if ( v19 )
        ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->Release)(v19);
      goto LABEL_130;
    }
    if ( a3 )
    {
      v47 = IsExclusiveModeDisabled(v19) == 0;
      v48 = IsOffloadDisabled(v19);
      if ( v48 && !v47 )
        goto LABEL_100;
      if ( g_PolicyManager )
      {
        *(_QWORD *)fPending = 0LL;
        v49 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, WINBOOL *))(*(_QWORD *)g_PolicyManager
                                                                                         + 32LL))(
                g_PolicyManager,
                *(_QWORD *)&v69.Data1,
                fPending);
        MixFormat = v49;
        if ( v49 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFC6,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v49,
            (int)&v65);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
          CoTaskMemFree(v27);
          goto LABEL_128;
        }
        if ( v47 )
          v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)fPending + 144LL))(
                  *(_QWORD *)fPending,
                  *((unsigned int *)a4 + 4),
                  1LL);
        if ( !v48 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 88LL))(*(_QWORD *)fPending) )
          LOBYTE(v48) = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)fPending + 144LL))(
                          *(_QWORD *)fPending,
                          *((unsigned int *)a4 + 4),
                          0LL) == 0;
        if ( *(_QWORD *)fPending )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
      }
      if ( !v47 )
      {
LABEL_100:
        MixFormat = -2004287474;
        CoTaskMemFree(v27);
        goto LABEL_128;
      }
      if ( (unsigned int)IsSPDIFFormat(v27) && (unsigned int)IsSPDIFEndpoint(v19) )
      {
        AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v19, v27, 0LL, v48);
        MixFormat = AcceptableSPDIFTypeForDevice;
        if ( AcceptableSPDIFTypeForDevice < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFDA,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)AcceptableSPDIFTypeForDevice,
            (int)&v65);
          CoTaskMemFree(v27);
          goto LABEL_128;
        }
        goto LABEL_124;
      }
      Context[0] = 0LL;
      v62 = (struct tWAVEFORMATEX **)Context;
      v51 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v19->lpVtbl->Activate)(
              v19,
              &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
              23LL);
      MixFormat = v51;
      if ( v51 >= 0 )
      {
        LOBYTE(v68) = 1;
        *(_QWORD *)fPending = 0LL;
        v67 = 0LL;
        p_pftDueTime = (struct _FILETIME *)fPending;
        MixFormat = CreateKSFormatFromWFXFormat(v27, &v67);
        if ( (_BYTE)v68 )
        {
          v52 = (struct KSDATAFORMAT_WAVEFORMATEX **)p_pftDueTime;
          v53 = v67;
          v54 = (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime;
          if ( v67 != (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime )
          {
            if ( v54 )
              CoTaskMemFree(v54);
            *v52 = v53;
          }
        }
        if ( MixFormat >= 0 )
        {
          pftDueTime = 0LL;
          LODWORD(v62) = v48;
          if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, _QWORD, struct tWAVEFORMATEX **, struct _FILETIME *))(*(_QWORD *)Context[0] + 80LL))(
                 Context[0],
                 *(_QWORD *)fPending,
                 (unsigned int)**(_DWORD **)fPending,
                 0LL,
                 v62,
                 &pftDueTime) >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pftDueTime);
            if ( *(_QWORD *)fPending )
              CoTaskMemFree(*(LPVOID *)fPending);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(Context);
LABEL_124:
            MixFormat = 0;
LABEL_125:
            CoTaskMemFree(v27);
            goto LABEL_128;
          }
          MixFormat = -2004287480;
          if ( pftDueTime )
            (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&pftDueTime + 16LL))(pftDueTime);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFE3,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat,
            (int)Context);
        }
        if ( *(_QWORD *)fPending )
          CoTaskMemFree(*(LPVOID *)fPending);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v51,
          (int)Context);
      }
      if ( Context[0] )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context[0] + 16LL))(Context[0]);
        CoTaskMemFree(v27);
        goto LABEL_128;
      }
      goto LABEL_125;
    }
    v60 = *((_DWORD *)v65 + 39) == 1;
    v36 = DeriveAudioProcessingModeConfiguration(
            *((unsigned int *)a4 + 4),
            *((unsigned int *)a4 + 6),
            *((unsigned int *)a4 + 24));
    MixFormat = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v36,
        v60);
      CoTaskMemFree(v27);
      goto LABEL_128;
    }
    if ( *((_DWORD *)a4 + 9) )
    {
      v43 = *((_DWORD *)a4 + 5);
      p_pftDueTime = &pftDueTime;
      pftDueTime = 0LL;
      v67 = 0LL;
      LOBYTE(v68) = 1;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v65,
                    v43,
                    v27,
                    &v69,
                    &v71,
                    (struct _GUID *)Context,
                    1,
                    (struct tWAVEFORMATEX **)&v67);
      if ( (_BYTE)v68 )
      {
        v44 = (struct KSDATAFORMAT_WAVEFORMATEX **)p_pftDueTime;
        v45 = v67;
        v46 = (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime;
        if ( v67 != (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime )
        {
          if ( v46 )
            CoTaskMemFree(v46);
          *v44 = v45;
        }
      }
      if ( MixFormat >= 0 )
      {
        if ( pftDueTime )
        {
          CoTaskMemFree(*(LPVOID *)&pftDueTime);
          MixFormat = 0;
          CoTaskMemFree(v27);
          goto LABEL_128;
        }
        goto LABEL_124;
      }
      v42 = 4025LL;
    }
    else
    {
      if ( *((_DWORD *)a4 + 25) )
      {
        if ( (v27->wFormatTag != 0xFFFE
           || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v27[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v27[1].wBitsPerSample)
           && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v27[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v27[1].wBitsPerSample))
          && ((v27->wFormatTag - 1) & 0xFFFD) != 0 )
        {
          MixFormat = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFAA,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x88890008LL,
            v60);
          CoTaskMemFree(v27);
          goto LABEL_128;
        }
        goto LABEL_124;
      }
      v38 = *((_DWORD *)a4 + 5);
      p_pftDueTime = &pftDueTime;
      pftDueTime = 0LL;
      v67 = 0LL;
      LOBYTE(v68) = 1;
      MixFormat = CEndpointCharacteristics::GetMixFormat(v65, v38, &v69, v37, (struct tWAVEFORMATEX **)&v67);
      if ( (_BYTE)v68 )
      {
        v39 = (struct KSDATAFORMAT_WAVEFORMATEX **)p_pftDueTime;
        v40 = v67;
        v41 = (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime;
        if ( v67 != (struct KSDATAFORMAT_WAVEFORMATEX *)*p_pftDueTime )
        {
          if ( v41 )
            CoTaskMemFree(v41);
          *v39 = v40;
        }
      }
      if ( MixFormat >= 0 )
      {
        MixFormat = IsStreamFormatSupportedForMixFormat(
                      v65,
                      &v71,
                      *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a4 + 5),
                      *(const struct tWAVEFORMATEX **)&pftDueTime,
                      v27,
                      a6);
        goto LABEL_83;
      }
      v42 = 4016LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat,
      v61);
LABEL_83:
    if ( pftDueTime )
    {
      CoTaskMemFree(*(LPVOID *)&pftDueTime);
      CoTaskMemFree(v27);
      goto LABEL_128;
    }
    goto LABEL_125;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF3E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v18,
    (int)&v65);
LABEL_130:
  v16 = v65;
  if ( v65 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v65 + 16LL))(v65);
LABEL_132:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v16, &AudioSrv_IsFormatSupported_Task_Stop);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v79);
  return (unsigned int)MixFormat;
}
