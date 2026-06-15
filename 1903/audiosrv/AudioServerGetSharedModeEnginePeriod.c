/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800E85F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
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
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800E6C38 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        const wchar_t *a2,
        struct VadServerSettings *a3,
        struct tWAVEFORMATEX *Src,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  IID v9; // xmm0
  __int64 v14; // r8
  void *v15; // r8
  int v16; // eax
  int IsFormatSupported; // ebx
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  struct _GUID v22; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // edx
  void *v24; // rcx
  int *v25; // r14
  int *v26; // r15
  int v27; // edx
  int SharedModeEnginePeriodicity; // eax
  void *v29; // r9
  DWORD nSamplesPerSec; // r8d
  int v31; // edx
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  void *v35; // rcx
  int v37; // [rsp+30h] [rbp-D0h]
  struct CEndpointCharacteristics *v38; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v40; // [rsp+80h] [rbp-80h] BYREF
  char v41; // [rsp+90h] [rbp-70h]
  WINBOOL fPending[4]; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID Context[2]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID v44; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID *p_pv; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v46; // [rsp+D0h] [rbp-30h] BYREF
  char v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  int *v49; // [rsp+E8h] [rbp-18h]
  struct _GUID v50; // [rsp+F0h] [rbp-10h] BYREF
  struct _TP_TIMER *v51[7]; // [rsp+100h] [rbp+0h] BYREF
  IID v52; // [rsp+138h] [rbp+38h]
  IID v53; // [rsp+148h] [rbp+48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v9 = *(IID *)a3;
  v48 = a9;
  v49 = a8;
  v52 = v9;
  v53 = v9;
  EtwEventActivityIdControl(4LL, &v53);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context)
    && fPending[0] )
  {
    Context[0] = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v15);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v51,
    *((struct _TP_TIMER **)Context[0] + 1),
    v14,
    (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod");
  v16 = ValidateVadServerSettings((IID *)a3);
  IsFormatSupported = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1045,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_32;
  }
  v44 = 0LL;
  *(_QWORD *)v40.Data4 = 0LL;
  *(_QWORD *)&v40.Data1 = &v44;
  v41 = 1;
  IsFormatSupported = AudioServerIsFormatSupported(
                        a1,
                        a2,
                        0,
                        (__int128 *)a3,
                        &Src->wFormatTag,
                        (struct tWAVEFORMATEX **)v40.Data4);
  if ( v41 )
  {
    v18 = **(void ***)&v40.Data1;
    **(_QWORD **)&v40.Data1 = *(_QWORD *)v40.Data4;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( IsFormatSupported < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1049,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
    goto LABEL_30;
  }
  v38 = 0LL;
  v19 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v38);
  IsFormatSupported = v19;
  if ( v19 >= 0 )
  {
    v21 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v38 + 56LL))(v38);
    v19 = DeriveAudioProcessingModeConfiguration(
            *((_DWORD *)a3 + 12),
            *((_DWORD *)a3 + 14),
            *((_DWORD *)a3 + 32),
            v38,
            v21 == 1,
            0,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 13),
            0,
            0,
            (struct _GUID *)Context,
            &v50,
            &v40,
            0LL);
    IsFormatSupported = v19;
    if ( v19 < 0 )
    {
      v20 = 4191LL;
      goto LABEL_15;
    }
    v22 = *(struct _GUID *)Context;
    v23 = *((_DWORD *)a3 + 13);
    p_pv = &pv;
    v37 = *((_DWORD *)a3 + 17);
    pv = 0LL;
    v46 = 0LL;
    v47 = 1;
    IsFormatSupported = DeriveConnectorFormatFromStreamFormat(
                          v38,
                          v23,
                          Src,
                          &v40,
                          &v50,
                          (struct _GUID *)Context,
                          v37,
                          &v46);
    if ( v47 )
    {
      v24 = *p_pv;
      *p_pv = v46;
      if ( v24 )
        CoTaskMemFree(v24);
    }
    if ( IsFormatSupported >= 0 )
    {
      v25 = v49;
      v26 = v48;
      v27 = *((_DWORD *)a3 + 13);
      v40 = v22;
      SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                      (__int64)v38,
                                      v27,
                                      (unsigned __int16 *)pv,
                                      &v40,
                                      a5 != 0,
                                      a6,
                                      a7,
                                      v49,
                                      v48);
      IsFormatSupported = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v29 = pv;
        nSamplesPerSec = Src->nSamplesPerSec;
        v31 = *((_DWORD *)pv + 1);
        if ( nSamplesPerSec != v31 )
        {
          *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v31, nSamplesPerSec);
          *a7 = TranslateFrameCountBetweenSamplingRates(*a7, *(_DWORD *)(v32 + 4), Src->nSamplesPerSec);
          *v25 = TranslateFrameCountBetweenSamplingRates(*v25, *(_DWORD *)(v33 + 4), Src->nSamplesPerSec);
          *v26 = TranslateFrameCountBetweenSamplingRates(*v26, *(_DWORD *)(v34 + 4), Src->nSamplesPerSec);
        }
        IsFormatSupported = 0;
        goto LABEL_27;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1064,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1062,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)IsFormatSupported);
    }
    v29 = pv;
LABEL_27:
    pv = 0LL;
    if ( v29 )
      CoTaskMemFree(v29);
    goto LABEL_29;
  }
  v20 = 4172LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v19);
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
LABEL_30:
  v35 = v44;
  v44 = 0LL;
  if ( v35 )
    CoTaskMemFree(v35);
LABEL_32:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v51);
  EtwEventActivityIdControl(4LL, &v53);
  return (unsigned int)IsFormatSupported;
}
