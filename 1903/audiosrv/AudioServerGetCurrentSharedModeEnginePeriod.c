/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006254 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180006544 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000DB74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180010080 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800180D0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18001ADD8 (--1-$out_param_t@V-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$function_deleter@P6AXPEAX@Z$1-C.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x18001ADFC (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     MIDL_user_allocate @ 0x180042BF0 (MIDL_user_allocate.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004733C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BB7C8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800CBB38 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D5A2C (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_5e14c2903f19bc99334c762d192b5b2b___ @ 0x1800E3EB8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800E6C38 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801166CC (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5)
{
  __int64 v8; // r8
  void *v9; // r8
  int v10; // eax
  int MixFormat; // edi
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _GUID v19; // xmm6
  struct tWAVEFORMATEX **v20; // rbx
  __int64 v21; // r8
  const struct tWAVEFORMATEX *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  struct _GUID *v25; // rdx
  LPVOID v26; // rbx
  int v27; // eax
  struct _GUID v28; // xmm6
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  struct tWAVEFORMATEX **v33; // rdi
  const struct tWAVEFORMATEX *v34; // rax
  __int64 v35; // rdi
  double v36; // xmm6_8
  struct _GUID v37; // xmm8
  __int64 v38; // rax
  int v39; // eax
  struct _GUID v40; // xmm7
  int SharedModeEnginePeriodicity; // eax
  __int64 v42; // rdx
  struct tWAVEFORMATEX **v43; // rbx
  const struct tWAVEFORMATEX *v44; // rax
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int16 *v47; // r9
  int v48; // r8d
  DWORD nSamplesPerSec; // edx
  void *v50; // rax
  CEndpointCharacteristics *v52; // [rsp+78h] [rbp-90h] BYREF
  struct IAudioMediaType *v53; // [rsp+80h] [rbp-88h] BYREF
  WINBOOL fPending[4]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v56; // [rsp+A8h] [rbp-60h]
  struct tWAVEFORMATEX *v57; // [rsp+B8h] [rbp-50h] BYREF
  void *Src; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID Context[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v60; // [rsp+D8h] [rbp-30h]
  struct _GUID v61; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v62[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct _GUID v63; // [rsp+108h] [rbp+0h] BYREF
  __int64 v64; // [rsp+118h] [rbp+10h] BYREF
  void *v65; // [rsp+120h] [rbp+18h] BYREF
  __int128 v66; // [rsp+128h] [rbp+20h] BYREF
  __int64 v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  _BYTE v69[24]; // [rsp+148h] [rbp+40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+160h] [rbp+58h] BYREF
  IID v71; // [rsp+198h] [rbp+90h] BYREF
  IID v72; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v68 = -2LL;
  v71 = *(IID *)a3;
  v72 = v71;
  EtwEventActivityIdControl(4LL, &v72);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context)
    && fPending[0] )
  {
    Context[0] = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context[0] + 1),
    v8,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod");
  v10 = ValidateVadServerSettings((IID *)a3);
  MixFormat = v10;
  if ( v10 >= 0 )
  {
    v52 = 0LL;
    v12 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v52);
    MixFormat = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1094,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v12);
LABEL_63:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
      goto LABEL_64;
    }
    v65 = 0LL;
    *(_QWORD *)&v55.Data1 = &v65;
    *(_QWORD *)v55.Data4 = 0LL;
    LOBYTE(v56) = 1;
    MixFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)v52 + 2) + 40LL))(
                  *((_QWORD *)v52 + 2),
                  v55.Data4);
    if ( (_BYTE)v56 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        *(void ***)&v55.Data1,
        *(void **)v55.Data4);
    if ( MixFormat < 0 )
    {
      v13 = (unsigned int)MixFormat;
      v14 = 4247LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v13);
LABEL_62:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v65);
      goto LABEL_63;
    }
    v15 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v52 + 56LL))(v52);
    v16 = DeriveAudioProcessingModeConfiguration(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            v52,
            v15 == 1,
            0,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
            0,
            0,
            (struct _GUID *)Context,
            &v61,
            &v63,
            0LL);
    MixFormat = v16;
    if ( v16 < 0 )
    {
      v13 = (unsigned int)v16;
      v14 = 4266LL;
      goto LABEL_14;
    }
    v64 = 0LL;
    v17 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, void *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
            g_DeviceGraphStore,
            v65,
            &v64);
    MixFormat = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B0,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v17);
LABEL_61:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
      goto LABEL_62;
    }
    v62[0] = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v64 + 80LL))(v64, &v66);
    v19 = *(struct _GUID *)Context;
    if ( v18 >= 0 )
    {
      v60 = v62;
      v55 = *(struct _GUID *)Context;
      v56 = v62;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_5e14c2903f19bc99334c762d192b5b2b___(
        (__int64)v69,
        v66,
        *((__int64 *)&v66 + 1),
        (__int64)&v55);
    }
    Src = 0LL;
    v57 = 0LL;
    if ( v62[0] )
    {
      v20 = (struct tWAVEFORMATEX **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v55, (__int64)&v57) + 8);
      v22 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
      MixFormat = CloneWaveFormat(v22, v20);
      wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
      if ( MixFormat < 0 )
      {
        v23 = 4294LL;
LABEL_58:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        goto LABEL_60;
      }
      Context[0] = 0LL;
      v24 = CAudioMediaType::Create(v57, (unsigned int)v57->cbSize + 18, (struct IAudioMediaType **)Context, 0.0, 0);
      MixFormat = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10CB,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v24);
LABEL_35:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Context);
LABEL_60:
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v57);
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
        std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v66);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v62);
        goto LABEL_61;
      }
      v53 = 0LL;
      v26 = Context[0];
      v27 = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
              v52,
              v25,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              (struct IAudioMediaType *)Context[0],
              &v53);
      MixFormat = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10CF,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v27);
LABEL_34:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
        goto LABEL_35;
      }
      v28 = v61;
      *(struct _GUID *)fPending = v61;
      *(_QWORD *)&v61.Data1 = 0LL;
      v29 = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
              v52,
              (struct _GUID *)fPending,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              v53,
              (struct IAudioMediaType **)&v61,
              0LL);
      MixFormat = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10D2,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v29);
LABEL_33:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v61);
        goto LABEL_34;
      }
      v63 = v28;
      *(_QWORD *)fPending = 0LL;
      v30 = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
              v52,
              &v63,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              *(struct IAudioMediaType **)&v61.Data1,
              (struct IAudioMediaType **)fPending);
      MixFormat = v30;
      if ( v30 < 0 )
      {
        v31 = (unsigned int)v30;
        v32 = 4309LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v31);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)fPending);
        goto LABEL_33;
      }
      v33 = (struct tWAVEFORMATEX **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v55, (__int64)&Src) + 8);
      v34 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending);
      MixFormat = CloneWaveFormat(v34, v33);
      wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
      if ( MixFormat < 0 )
      {
        v31 = (unsigned int)MixFormat;
        v32 = 4311LL;
        goto LABEL_32;
      }
      v35 = v62[0];
      v36 = (double)*(int *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 40LL))(v26) + 4);
      *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35) * v36 / 10000000.0 + 0.5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)fPending);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v61);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Context);
LABEL_54:
      v47 = (unsigned __int16 *)Src;
      v48 = *((_DWORD *)Src + 1);
      nSamplesPerSec = v57->nSamplesPerSec;
      if ( v48 != nSamplesPerSec )
        *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v48);
      v50 = MIDL_user_allocate(v47[8] + 18LL);
      *a4 = v50;
      if ( v50 )
      {
        memcpy_0(v50, Src, *((unsigned __int16 *)Src + 8) + 18LL);
        MixFormat = 0;
        goto LABEL_60;
      }
      MixFormat = -2147024882;
      v23 = 4349LL;
      goto LABEL_58;
    }
    *(_QWORD *)fPending = 0LL;
    v37 = v63;
    v38 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v55, (__int64)fPending);
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  v52,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                  &v63,
                  (struct tWAVEFORMATEX **)(v38 + 8));
    wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10E0,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
LABEL_52:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)fPending);
      goto LABEL_60;
    }
    v53 = 0LL;
    v39 = CAudioMediaType::Create(
            *(const struct tWAVEFORMATEX **)fPending,
            (unsigned int)*(unsigned __int16 *)(*(_QWORD *)fPending + 16LL) + 18,
            &v53,
            0.0,
            0);
    MixFormat = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10E3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v39);
LABEL_51:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_52;
    }
    v40 = v61;
    v63 = v61;
    Context[0] = 0LL;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
                                    v52,
                                    &v63,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                    v53,
                                    (struct IAudioMediaType **)Context);
    MixFormat = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      v42 = 4326LL;
LABEL_49:
      v45 = (unsigned int)SharedModeEnginePeriodicity;
      goto LABEL_50;
    }
    v43 = (struct tWAVEFORMATEX **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v55, (__int64)&Src) + 8);
    v44 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context[0] + 40LL))(Context[0]);
    MixFormat = CloneWaveFormat(v44, v43);
    wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
    if ( MixFormat >= 0 )
    {
      v63 = v19;
      v61 = v40;
      v55 = v37;
      v46 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v69, (__int64)&v57);
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v52,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                    *(struct tWAVEFORMATEX **)fPending,
                    &v55,
                    &v61,
                    &v63,
                    *(_DWORD *)(a3 + 68),
                    (struct tWAVEFORMATEX **)(v46 + 8));
      wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v69);
      if ( MixFormat >= 0 )
      {
        v55 = v19;
        SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                        (__int64)v52,
                                        *(_DWORD *)(a3 + 52),
                                        &v57->wFormatTag,
                                        &v55,
                                        0,
                                        a5,
                                        0LL,
                                        0LL,
                                        0LL);
        MixFormat = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Context);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
          wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)fPending);
          goto LABEL_54;
        }
        v42 = 4334LL;
        goto LABEL_49;
      }
      v45 = (unsigned int)MixFormat;
      v42 = 4332LL;
    }
    else
    {
      v45 = (unsigned int)MixFormat;
      v42 = 4328LL;
    }
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v45);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Context);
    goto LABEL_51;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108F,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v10);
LABEL_64:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v71);
  return (unsigned int)MixFormat;
}
