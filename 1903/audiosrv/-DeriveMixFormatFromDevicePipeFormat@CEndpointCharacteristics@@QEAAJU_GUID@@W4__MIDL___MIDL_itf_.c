/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180006544
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006718 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180007018 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180007088 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007210 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  struct IAudioMediaType *v10; // r14
  int ModeEffect; // eax
  unsigned int v12; // ebx
  int v13; // eax
  struct IAudioMediaType *v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct IAudioProcessingObject *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+50h] [rbp-21h] BYREF
  struct IAudioProcessingObject *v26; // [rsp+58h] [rbp-19h] BYREF
  struct IAudioMediaType *v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+68h] [rbp-9h] BYREF
  int v29; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp+7h] BYREF
  struct _GUID v31; // [rsp+88h] [rbp+17h] BYREF
  _QWORD v32[2]; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v32[1] = -2LL;
  v27 = 0LL;
  v10 = 0LL;
  v32[0] = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v27, a4);
    v14 = v27;
    goto LABEL_12;
  }
  v31 = *a2;
  v26 = 0LL;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(this, &v31, 0, a3, 0LL, &v26, 0LL);
  v12 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v16 = 7619LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ModeEffect);
    goto LABEL_49;
  }
  if ( v26 )
  {
    v13 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this);
    v24 = 0LL;
    if ( !v13 )
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v31, a4);
      v24 = 0LL;
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))v26->lpVtbl->IsInputFormatSupported)(
             v26,
             a4,
             *(_QWORD *)&v31.Data1,
             &v24) < 0 )
      {
        v17 = 7628LL;
      }
      else
      {
        v25 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v25) < 0 )
        {
          v17 = 7631LL;
        }
        else
        {
          if ( !v25 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v27, v24);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_9:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
            goto LABEL_10;
          }
          v17 = 7632LL;
        }
      }
      v12 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_45:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
LABEL_49:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      goto LABEL_15;
    }
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v30, a4);
    v24 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))v26->lpVtbl->IsOutputFormatSupported)(
            v26,
            a4,
            v30[0],
            &v24);
    if ( v18 == -2005073917 )
    {
      v25 = 0;
      *(_QWORD *)&v31.Data1 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct _GUID *))v26->lpVtbl->QueryInterface)(
             v26,
             &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
             &v31) >= 0
        && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v31.Data1 + 24LL))(*(_QWORD *)&v31.Data1, &v25) >= 0
        && (v25 & 1) != 0 )
      {
        v28 = 0LL;
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, __int64 *))v26->lpVtbl->IsInputFormatSupported)(
               v26,
               0LL,
               a4,
               &v28) < 0 )
        {
          v19 = 7658LL;
LABEL_34:
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_44:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v30);
          goto LABEL_45;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v30, v28);
        v20 = v24;
        v21 = 0LL;
        v24 = 0LL;
        if ( v20 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v21 = v24;
        }
        v22 = v26;
        v24 = 0LL;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, __int64, _QWORD, __int64 *))v22->lpVtbl->IsOutputFormatSupported)(
               v22,
               v28,
               v30[0],
               &v24) < 0 )
        {
          v19 = 7663LL;
          goto LABEL_34;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v32, v28);
        v18 = 0;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        v10 = (struct IAudioMediaType *)v32[0];
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
    }
    if ( v18 >= 0 )
    {
      v29 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v29) >= 0 )
      {
        if ( !v29 )
        {
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v27, v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v30);
          goto LABEL_9;
        }
        v23 = 7673LL;
      }
      else
      {
        v23 = 7672LL;
      }
    }
    else
    {
      v23 = 7668LL;
    }
    v12 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    goto LABEL_44;
  }
  wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v27, a4);
LABEL_10:
  v14 = v27;
  ModeEffect = ValidateAPOInputFormat(v27);
  v12 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v16 = 7683LL;
    goto LABEL_48;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
LABEL_12:
  v27 = 0LL;
  *a5 = v14;
  if ( a6 )
  {
    v32[0] = 0LL;
    *a6 = v10;
  }
  v12 = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v32);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  return v12;
}
