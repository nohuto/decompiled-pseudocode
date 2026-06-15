/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800127FC (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800CFCB8 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800D2FA4 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800D64F8 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A684 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A7A8 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int EndpointEffect; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 *p_pv; // rcx
  struct IAudioMediaType *v19; // rbx
  const struct tWAVEFORMATEX *v20; // rax
  bool v21; // r14
  _QWORD *v22; // rbx
  void *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  struct IAudioMediaType *v29; // r14
  int v30; // eax
  __int64 v31; // r9
  __int64 v32; // rdx
  const struct tWAVEFORMATEX *v33; // rax
  __int64 v34; // rbx
  struct IAudioProcessingObject **v35; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  struct IAudioProcessingObject *v37; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+48h] [rbp-41h] BYREF
  struct IAudioMediaType *v39; // [rsp+50h] [rbp-39h] BYREF
  struct IAudioMediaType *v40; // [rsp+58h] [rbp-31h] BYREF
  struct IAudioMediaType *v41[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v42[20]; // [rsp+70h] [rbp-19h] BYREF
  int v43; // [rsp+84h] [rbp-5h]
  GUID v44; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v41[1] = (struct IAudioMediaType *)-2LL;
  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1154LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  v37 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(
                       this,
                       0,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       0LL,
                       &v37,
                       0LL);
    v13 = EndpointEffect;
    if ( EndpointEffect < 0 )
    {
      v14 = 1164LL;
      goto LABEL_8;
    }
LABEL_9:
    v39 = 0LL;
    v40 = 0LL;
    if ( v10 == 1 )
    {
      memset_0(v42, 0, 0x28uLL);
      if ( !v37 )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          1175LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
LABEL_58:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        goto LABEL_59;
      }
      pv = 0LL;
      if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, LPVOID *))v37->lpVtbl->IsOutputFormatSupported)(
             v37,
             0LL,
             a4,
             &pv) )
      {
        v13 = -2004287480;
        v15 = 2290679816LL;
        v16 = 1179LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v16,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v15);
        p_pv = (__int64 *)&pv;
LABEL_57:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(p_pv);
        goto LABEL_58;
      }
      *(_DWORD *)v42 = 196606;
      *(_DWORD *)&v42[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                     + 4);
      *(_DWORD *)&v42[12] = 2097160;
      *(_DWORD *)&v42[8] = 8
                         * *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                     + 4);
      *(_DWORD *)&v42[16] = 2097174;
      v43 = 3;
      v44 = GUID_00000003_0000_0010_8000_00aa00389b71;
      v39 = 0LL;
      v17 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v42, 0x28u, &v39, 0.0, 0);
      v13 = v17;
      if ( v17 < 0 )
      {
        v15 = (unsigned int)v17;
        v16 = 1196LL;
        goto LABEL_16;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v40, (__int64)a4);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
      v19 = v40;
LABEL_31:
      v41[0] = 0LL;
      if ( v37 )
      {
        v38 = 0;
        pv = 0LL;
        if ( *((_DWORD *)this + 39) )
        {
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v37->lpVtbl->IsOutputFormatSupported)(
                 v37,
                 v19,
                 v39,
                 &pv) < 0 )
          {
            v28 = 1231LL;
            goto LABEL_45;
          }
          if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v38) < 0 )
          {
            v28 = 1233LL;
            goto LABEL_45;
          }
          if ( v38 )
          {
            v28 = 1234LL;
            goto LABEL_45;
          }
        }
        else
        {
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v37->lpVtbl->IsInputFormatSupported)(
                 v37,
                 v19,
                 v39,
                 &pv) < 0 )
          {
            v28 = 1224LL;
LABEL_45:
            v13 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              v28,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
            goto LABEL_56;
          }
          if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v38) < 0 )
          {
            v28 = 1225LL;
            goto LABEL_45;
          }
          if ( v38 )
          {
            v28 = 1226LL;
            goto LABEL_45;
          }
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)v41, (__int64)pv);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
      }
      else
      {
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)v41, (__int64)v39);
      }
      v29 = v41[0];
      v30 = ValidateAPOInputFormat(v41[0]);
      v13 = v30;
      if ( v30 >= 0 )
      {
        if ( *((_DWORD *)this + 39)
          || (v33 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->GetAudioFormat)(v19),
              IsDolbyMatFormat(v33))
          || (v34 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4),
              *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->GetAudioFormat)(v29) + 4) == *(_DWORD *)(v34 + 4)) )
        {
          v41[0] = 0LL;
          *a5 = v29;
          v13 = 0;
          goto LABEL_56;
        }
        v13 = -2004287480;
        v31 = 2290679816LL;
        v32 = 1251LL;
      }
      else
      {
        v31 = (unsigned int)v30;
        v32 = 1244LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v32,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v31);
LABEL_56:
      p_pv = (__int64 *)v41;
      goto LABEL_57;
    }
    pv = 0LL;
    *(_QWORD *)v42 = &pv;
    *(_QWORD *)&v42[8] = 0LL;
    v42[16] = 1;
    v20 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
    v21 = (int)CloneWaveFormat(v20, (struct tWAVEFORMATEX **)&v42[8]) < 0;
    if ( v42[16] )
    {
      v22 = *(_QWORD **)v42;
      v23 = **(void ***)v42;
      v24 = *(_QWORD *)&v42[8];
      if ( *(_QWORD *)&v42[8] != **(_QWORD **)v42 )
      {
        if ( v23 )
          CoTaskMemFree(v23);
        *v22 = v24;
      }
    }
    if ( v21 )
    {
      v13 = -2004287480;
      v25 = 2290679816LL;
      v26 = 1204LL;
    }
    else
    {
      ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
      v40 = 0LL;
      v27 = CAudioMediaType::Create(
              (const struct tWAVEFORMATEX *)pv,
              (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
              &v40,
              0.0,
              0);
      v13 = v27;
      if ( v27 >= 0 )
      {
        v19 = v40;
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v39, (__int64)v40);
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_31;
      }
      v25 = (unsigned int)v27;
      v26 = 1209LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v25);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_58;
  }
  EndpointEffect = CEndpointCharacteristics::GetGfx(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v37,
                     (struct IAudioSystemEffects2 **)v35);
  v13 = EndpointEffect;
  if ( EndpointEffect >= 0 )
    goto LABEL_9;
  v14 = 1160LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)EndpointEffect);
LABEL_59:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
  return v13;
}
