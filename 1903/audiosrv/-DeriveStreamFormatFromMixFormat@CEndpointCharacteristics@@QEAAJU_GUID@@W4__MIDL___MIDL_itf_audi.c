/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801166CC
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EA0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180007018 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180007088 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118550 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  int Lfx; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  struct IAudioMediaType *v15; // rdi
  int v16; // eax
  struct IAudioSystemEffects2 **v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioProcessingObject *v21; // [rsp+50h] [rbp-30h] BYREF
  struct IAudioMediaType *v22; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = -2LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(
            this,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
            0LL,
            &v21,
            v18);
    v10 = Lfx;
    if ( Lfx < 0 )
    {
      v11 = 7713LL;
      goto LABEL_6;
    }
LABEL_7:
    if ( v21 )
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v23, (__int64)a4);
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this);
      v20 = 0LL;
      if ( v12 )
      {
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))v21->lpVtbl->IsOutputFormatSupported)(
               v21,
               a4,
               *(_QWORD *)&v23.Data1,
               &v20) < 0 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7733LL;
          goto LABEL_23;
        }
        v19 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v19) < 0 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7737LL;
          goto LABEL_23;
        }
        if ( v19 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7738LL;
          goto LABEL_23;
        }
      }
      else
      {
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))v21->lpVtbl->IsInputFormatSupported)(
               v21,
               a4,
               *(_QWORD *)&v23.Data1,
               &v20) < 0 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7724LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v13);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          goto LABEL_27;
        }
        v19 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v19) < 0 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7727LL;
          goto LABEL_23;
        }
        if ( v19 )
        {
          v10 = -2004287480;
          v13 = 2290679816LL;
          v14 = 7728LL;
          goto LABEL_23;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v22, v20);
      v15 = v22;
      v16 = ValidateAPOInputFormat(v22);
      v10 = v16;
      if ( v16 < 0 )
      {
        v13 = (unsigned int)v16;
        v14 = 7743LL;
        goto LABEL_23;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v22, (__int64)a4);
      v15 = v22;
    }
    v22 = 0LL;
    *a5 = v15;
    v10 = 0;
    goto LABEL_27;
  }
  v23 = *a2;
  Lfx = CEndpointCharacteristics::GetStreamEffect(
          this,
          &v23,
          0,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
          0LL,
          &v21,
          0LL);
  v10 = Lfx;
  if ( Lfx >= 0 )
    goto LABEL_7;
  v11 = 7709LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)Lfx);
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
  return v10;
}
