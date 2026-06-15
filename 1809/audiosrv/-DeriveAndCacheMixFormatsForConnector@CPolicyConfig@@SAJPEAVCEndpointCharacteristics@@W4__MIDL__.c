/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4B14 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002580 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800161C0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18003DB60 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800CF3C0 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800D1464 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800D2DA8 (-HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MI.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800D4F5C (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D55E4 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800D5DF0 (-SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180108E94 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180109DD8 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(struct CEndpointCharacteristics *a1, __int32 a2)
{
  struct IAudioMediaType *v2; // r15
  unsigned int v3; // r13d
  __int64 SupportedConnectorModesInternal; // rax
  GUID v5; // xmm6
  int ConnectorFormatForProcessingMode; // eax
  unsigned int v7; // r12d
  struct tWAVEFORMATEX *v8; // r14
  int v9; // eax
  struct IAudioMediaType *v10; // rsi
  struct _GUID *v11; // rdx
  int v12; // eax
  struct IUnknown *v13; // rbx
  int v14; // eax
  struct IAudioMediaType *v15; // rdi
  const struct tWAVEFORMATEX *v16; // rax
  unsigned __int64 v17; // rax
  struct tWAVEFORMATEX *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  int APOSupportedProcessingModes; // eax
  int v22; // esi
  int v23; // r14d
  int v24; // eax
  struct IAudioMediaType *v25; // rbx
  struct IAudioMediaType *v26; // rdi
  const struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rax
  char v29; // bl
  __int64 v30; // rdx
  __int64 v32; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v33; // [rsp+38h] [rbp-69h] BYREF
  struct CEndpointCharacteristics *v34; // [rsp+40h] [rbp-61h] BYREF
  struct _GUID v35; // [rsp+48h] [rbp-59h] BYREF
  struct IAudioMediaType *v36; // [rsp+58h] [rbp-49h] BYREF
  __int64 v37; // [rsp+60h] [rbp-41h]
  struct IUnknown *v38; // [rsp+68h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-31h] BYREF
  struct IAudioMediaType *v40[2]; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v41; // [rsp+88h] [rbp-19h]
  struct IUnknown *v42; // [rsp+90h] [rbp-11h] BYREF
  __int128 v43; // [rsp+98h] [rbp-9h]
  char v44; // [rsp+A8h] [rbp+7h]
  __int64 v45; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v45 = -2LL;
  v34 = a1;
  v33 = a2;
  v40[0] = (struct IAudioMediaType *)&v34;
  v40[1] = (struct IAudioMediaType *)&v33;
  v43 = *(_OWORD *)v40;
  v44 = 1;
  v41 = *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)a1, a2, 0) + 8);
  v2 = 0LL;
  v42 = 0LL;
  v3 = 0;
  if ( v41 )
  {
    while ( 1 )
    {
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                          (__int64)v34,
                                          v33,
                                          0);
      if ( v3 >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
        v5 = GUID_00000000_0000_0000_0000_000000000000;
      else
        v5 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        SupportedConnectorModesInternal,
                        v3);
      pv = 0LL;
      v35 = v5;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v34,
                                           v33,
                                           &v35,
                                           (struct tWAVEFORMATEX **)&pv);
      v7 = ConnectorFormatForProcessingMode;
      v8 = (struct tWAVEFORMATEX *)pv;
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          3384LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)ConnectorFormatForProcessingMode);
        goto LABEL_47;
      }
      v36 = 0LL;
      v9 = CAudioMediaType::Create(
             (const struct tWAVEFORMATEX *)pv,
             (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
             &v36,
             0.0,
             0);
      v7 = v9;
      v10 = v36;
      if ( v9 < 0 )
      {
        v20 = 3387LL;
        goto LABEL_42;
      }
      v9 = ValidateUncompressedWaveFormatEx(v8);
      v7 = v9;
      if ( v9 < 0 )
        break;
      v35 = v5;
      v9 = CPolicyConfig::ConfirmDeviceFormat(v34, v8, &v35, v33, 0);
      v7 = v9;
      if ( v9 < 0 )
      {
        v20 = 3396LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v20,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_43;
      }
      v38 = 0LL;
      v12 = DeriveDevicePipeFormatFromConnectorFormat(v34, v11, v33, v10, (struct IAudioMediaType **)&v38);
      v7 = v12;
      v13 = v38;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          3404LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_36;
      }
      v40[0] = 0LL;
      v35 = v5;
      v14 = DeriveMixFormatFromDevicePipeFormat(v34, &v35, v33, (struct IAudioMediaType *)v38, v40, 0LL);
      v7 = v14;
      v15 = v40[0];
      if ( v14 < 0 )
      {
        v19 = 3412LL;
        goto LABEL_32;
      }
      v35 = v5;
      v16 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v40[0]->lpVtbl->GetAudioFormat)(v40[0]);
      v14 = CPolicyConfig::SetMixFormatInternal(v34, v33, &v35, v16);
      v7 = v14;
      if ( v14 < 0 )
      {
        v19 = 3415LL;
        goto LABEL_32;
      }
      if ( g_bIsSurfaceHub )
      {
        v35 = v5;
        CPolicyConfig::HandleOverridingMixFormatInternal(v34, v33, &v35, v15);
      }
      v17 = *(_QWORD *)&v5.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v5.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v17 = _mm_srli_si128((__m128i)v5, 8).m128i_u64[0] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v17 && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v34, v33) )
      {
        v35 = v5;
        v18 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v13->lpVtbl[1].Release)(v13);
        v14 = CPolicyConfig::SetDevicePipeFormatInternal(v34, v33, &v35, v18);
        v7 = v14;
        if ( v14 < 0 )
        {
          v19 = 3427LL;
LABEL_32:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            v19,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v14);
          if ( v15 )
            ((void (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->Release)(v15);
LABEL_36:
          if ( v13 )
            ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
LABEL_43:
          if ( v10 )
            ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
LABEL_47:
          CoTaskMemFree(v8);
          pv = 0LL;
          goto LABEL_78;
        }
        if ( v2 != (struct IAudioMediaType *)v13 )
        {
          ATL::AtlComPtrAssign(&v42, v13);
          v2 = (struct IAudioMediaType *)v42;
        }
      }
      ((void (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->Release)(v15);
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      if ( v10 )
        ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
      CoTaskMemFree(v8);
      pv = 0LL;
      if ( ++v3 >= v41 )
        goto LABEL_26;
    }
    v20 = 3389LL;
    goto LABEL_42;
  }
LABEL_26:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v34, v33) )
  {
LABEL_62:
    v29 = 0;
    v44 = 0;
    v7 = 0;
    goto LABEL_63;
  }
  if ( !v2 )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      3439LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_78;
  }
  v36 = 0LL;
  v37 = 0LL;
  APOSupportedProcessingModes = CEndpointCharacteristics::GetAPOSupportedProcessingModes(
                                  v34,
                                  v33,
                                  (struct CAudioSignalProcessingModeArray *)&v36);
  v7 = APOSupportedProcessingModes;
  if ( APOSupportedProcessingModes < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      3442LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)APOSupportedProcessingModes);
    goto LABEL_77;
  }
  v22 = 0;
  v23 = v37;
  if ( (int)v37 <= 0 )
  {
LABEL_61:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
    goto LABEL_62;
  }
  while ( 1 )
  {
    v35 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v36, v22);
    if ( CEndpointCharacteristics::IsConnectorModeSupported(v34, (unsigned int)v33, &v35) )
      goto LABEL_60;
    v40[0] = 0LL;
    v38 = 0LL;
    v35 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v36, v22);
    v24 = DeriveMixFormatFromDevicePipeFormat(v34, &v35, v33, v2, (struct IAudioMediaType **)&v38, v40);
    v7 = v24;
    v25 = v40[0];
    v26 = (struct IAudioMediaType *)v38;
    if ( v24 < 0 )
      break;
    v35 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v36, v22);
    v27 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->GetAudioFormat)(v26);
    v24 = CPolicyConfig::SetMixFormatInternal(v34, v33, &v35, v27);
    v7 = v24;
    if ( v24 < 0 )
    {
      v32 = 3473LL;
      goto LABEL_73;
    }
    if ( g_bIsSurfaceHub )
    {
      v35 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)&v36,
                               v22);
      CPolicyConfig::HandleOverridingMixFormatInternal(v34, v33, &v35, v26);
    }
    if ( v25 )
    {
      v35 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)&v36,
                               v22);
      v28 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->GetAudioFormat)(v25);
      v24 = CPolicyConfig::SetStreamGroupFormatInternal(v34, v33, &v35, v28);
      v7 = v24;
      if ( v24 < 0 )
      {
        v32 = 3487LL;
        goto LABEL_73;
      }
    }
    ((void (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->Release)(v26);
    if ( v25 )
      ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
LABEL_60:
    if ( ++v22 >= v23 )
      goto LABEL_61;
  }
  v32 = 3468LL;
LABEL_73:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v32,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v24);
  if ( v26 )
    ((void (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->Release)(v26);
  if ( v25 )
    ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
LABEL_77:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
LABEL_78:
  v29 = 1;
LABEL_63:
  if ( v2 )
    ((void (__fastcall *)(struct IAudioMediaType *))v2->lpVtbl->Release)(v2);
  if ( v29 )
  {
    v44 = 0;
    v30 = 2LL;
    if ( v33 != eKeywordDetectorConnector )
      v30 = 0LL;
    CEndpointCharacteristics::ClearMixFormatCache(v34, v30);
  }
  return v7;
}
