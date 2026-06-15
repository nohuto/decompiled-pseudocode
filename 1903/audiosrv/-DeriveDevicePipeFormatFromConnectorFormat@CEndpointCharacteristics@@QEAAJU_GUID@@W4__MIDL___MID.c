/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006254
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006718 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800058E8 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180005A6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180007018 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180007088 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007820 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800180D0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180038730 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011847C (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int EndpointEffect; // eax
  unsigned int v12; // edi
  const struct tWAVEFORMATEX *v13; // rax
  bool v14; // bl
  void *v15; // rdx
  int v16; // eax
  struct IAudioMediaType *v17; // rbx
  void *v18; // rcx
  int v19; // eax
  struct IAudioProcessingObject *v20; // rdi
  LPVOID v21; // rcx
  struct IAudioMediaType *v22; // r15
  int v23; // eax
  const struct tWAVEFORMATEX *v24; // rax
  __int64 v25; // rbx
  void *p_pv; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  struct IAudioProcessingObject **v38; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  struct IAudioProcessingObject *v40; // [rsp+40h] [rbp-49h] BYREF
  int v41; // [rsp+48h] [rbp-41h] BYREF
  struct IAudioMediaType *v42; // [rsp+50h] [rbp-39h] BYREF
  struct IAudioMediaType *v43; // [rsp+58h] [rbp-31h] BYREF
  struct IAudioMediaType *v44[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v45[20]; // [rsp+70h] [rbp-19h] BYREF
  int v46; // [rsp+84h] [rbp-5h]
  GUID v47; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v44[1] = (struct IAudioMediaType *)-2LL;
  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v40 = 0LL;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
    {
      EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 0, a3, 0LL, &v40, 0LL);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
        goto LABEL_4;
      v28 = 7510LL;
    }
    else
    {
      EndpointEffect = CEndpointCharacteristics::GetGfx(this, a3, 0LL, &v40, (struct IAudioSystemEffects2 **)v38);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
      {
LABEL_4:
        v42 = 0LL;
        v43 = 0LL;
        if ( v10 != 1 )
        {
          pv = 0LL;
          *(_QWORD *)v45 = &pv;
          *(_QWORD *)&v45[8] = 0LL;
          v45[16] = 1;
          v13 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
          v14 = (int)CloneWaveFormat(v13, (struct tWAVEFORMATEX **)&v45[8]) < 0;
          if ( v45[16] )
          {
            v15 = **(void ***)v45;
            **(_QWORD **)v45 = *(_QWORD *)&v45[8];
            if ( v15 )
              CoTaskMemFree(v15);
          }
          if ( v14 )
          {
            v12 = -2004287480;
            v32 = 2290679816LL;
            v33 = 7550LL;
          }
          else
          {
            ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
            v43 = 0LL;
            v16 = CAudioMediaType::Create(
                    (const struct tWAVEFORMATEX *)pv,
                    (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                    &v43,
                    0.0,
                    0);
            v12 = v16;
            if ( v16 >= 0 )
            {
              v17 = v43;
              wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v42, v43);
              v18 = pv;
              pv = 0LL;
              if ( v18 )
                CoTaskMemFree(v18);
LABEL_12:
              v44[0] = 0LL;
              if ( !v40 )
              {
                wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v44, v42);
LABEL_20:
                v22 = v44[0];
                v23 = ValidateAPOInputFormat(v44[0]);
                v12 = v23;
                if ( v23 < 0 )
                {
                  v36 = (unsigned int)v23;
                  v37 = 7590LL;
                }
                else
                {
                  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
                    || (v24 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->GetAudioFormat)(v17),
                        IsDolbyMatFormat(v24))
                    || (v25 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4),
                        *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->GetAudioFormat)(v22)
                                  + 4) == *(_DWORD *)(v25 + 4)) )
                  {
                    v44[0] = 0LL;
                    *a5 = v22;
                    v12 = 0;
LABEL_25:
                    p_pv = v44;
LABEL_26:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(p_pv);
LABEL_27:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
LABEL_28:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
                    return v12;
                  }
                  v12 = -2004287480;
                  v36 = 2290679816LL;
                  v37 = 7597LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v37,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v36);
                goto LABEL_25;
              }
              v41 = 0;
              pv = 0LL;
              v19 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this);
              v20 = v40;
              v21 = pv;
              pv = 0LL;
              if ( v19 )
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v20->lpVtbl->IsOutputFormatSupported)(
                       v20,
                       v17,
                       v42,
                       &pv) >= 0 )
                {
                  if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v41) >= 0 )
                  {
                    if ( !v41 )
                      goto LABEL_19;
                    v35 = 7580LL;
                  }
                  else
                  {
                    v35 = 7579LL;
                  }
                }
                else
                {
                  v35 = 7577LL;
                }
              }
              else
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v20->lpVtbl->IsInputFormatSupported)(
                       v20,
                       v17,
                       v42,
                       &pv) < 0 )
                {
                  v35 = 7570LL;
                }
                else if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v41) < 0 )
                {
                  v35 = 7571LL;
                }
                else
                {
                  if ( !v41 )
                  {
LABEL_19:
                    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(v44, pv);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pv);
                    goto LABEL_20;
                  }
                  v35 = 7572LL;
                }
              }
              v12 = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v35,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)0x88890008LL);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pv);
              goto LABEL_25;
            }
            v32 = (unsigned int)v16;
            v33 = 7555LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v32);
          v34 = pv;
          pv = 0LL;
          if ( v34 )
            CoTaskMemFree(v34);
          goto LABEL_27;
        }
        memset_0(&v45[2], 0, 0x26uLL);
        if ( !v40 )
        {
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D61,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          goto LABEL_27;
        }
        pv = 0LL;
        if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, LPVOID *))v40->lpVtbl->IsOutputFormatSupported)(
               v40,
               0LL,
               a4,
               &pv) )
        {
          v12 = -2004287480;
          v29 = 2290679816LL;
          v30 = 7525LL;
        }
        else
        {
          *(_DWORD *)v45 = 196606;
          *(_DWORD *)&v45[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                         + 4);
          *(_DWORD *)&v45[12] = 2097160;
          *(_DWORD *)&v45[8] = 8
                             * *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                         + 4);
          *(_DWORD *)&v45[16] = 2097174;
          v46 = 3;
          v47 = GUID_00000003_0000_0010_8000_00aa00389b71;
          v42 = 0LL;
          v31 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v45, 0x28u, &v42, 0.0, 0);
          v12 = v31;
          if ( v31 >= 0 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v43, a4);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pv);
            v17 = v43;
            goto LABEL_12;
          }
          v29 = (unsigned int)v31;
          v30 = 7542LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v29);
        p_pv = &pv;
        goto LABEL_26;
      }
      v28 = 7506LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D4C,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
