/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDAAC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180011CE0 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18003B330 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800E8170 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006274 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180006564 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001B3B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800DD38C (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800DE1BC (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800DEE80 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=28
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  struct tWAVEFORMATEX *v12; // r12
  int v13; // eax
  struct tWAVEFORMATEX *v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  struct tWAVEFORMATEX *v18; // rbx
  struct IAudioMediaType *v19; // rdi
  int v20; // eax
  struct _GUID *v21; // rdx
  LPVOID v22; // rsi
  __int64 v23; // rdx
  const struct tWAVEFORMATEX *v24; // rax
  const struct tWAVEFORMATEX *v25; // rax
  int DeviceDefaults; // eax
  struct tWAVEFORMATEX *v27; // r15
  int v28; // eax
  struct tWAVEFORMATEX *v29; // r14
  __int64 v30; // rdx
  DWORD nSamplesPerSec; // ecx
  struct IAudioMediaType *v32; // rbx
  struct IAudioMediaType *v33; // rdi
  int v34; // eax
  struct _GUID *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  const struct tWAVEFORMATEX *v38; // rax
  const struct tWAVEFORMATEX *v39; // rax
  struct _GUID v41; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+58h] [rbp-59h] BYREF
  struct IAudioMediaType *v43; // [rsp+60h] [rbp-51h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+68h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-41h] BYREF
  struct tWAVEFORMATEX *v46; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v47; // [rsp+80h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v48; // [rsp+88h] [rbp-29h] BYREF
  struct _GUID v49; // [rsp+98h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]
  int v55; // [rsp+130h] [rbp+7Fh]

  v50 = -2LL;
  v12 = 0LL;
  v46 = 0LL;
  *a8 = 0LL;
  v48 = 0LL;
  v13 = CloneWaveFormat(Src, &v48);
  v14 = v48;
  if ( v13 < 0 )
  {
    v15 = -2004287480;
    v16 = 1609LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    goto LABEL_72;
  }
  v41 = *a4;
  if ( (int)CEndpointCharacteristics::GetMixFormat(a1, a2, &v41, &v46) < 0 )
  {
    v15 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    v12 = v46;
    goto LABEL_72;
  }
  v41 = *a5;
  v12 = v46;
  if ( (unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v41, a2, v46, v14, 0LL) )
  {
    v15 = -2004287480;
    if ( a7 )
    {
      v44 = 0LL;
      v41 = *a6;
      v17 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(a1, a2, Src, &v41, &v44);
      if ( v17 >= 0 )
      {
        pv = 0LL;
        v18 = 0LL;
        Srca = 0LL;
        v19 = 0LL;
        v43 = 0LL;
        v20 = CAudioMediaType::Create(v44, (unsigned int)v44->cbSize + 18, (struct IAudioMediaType **)&pv, 0.0, 0);
        v22 = pv;
        if ( v20 < 0 )
        {
          v23 = 1648LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          goto LABEL_26;
        }
        if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                    a1,
                    v21,
                    a2,
                    (struct IAudioMediaType *)pv,
                    (struct IAudioMediaType **)&Srca) >= 0 )
        {
          v41 = *a5;
          v18 = Srca;
          if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                      a1,
                      &v41,
                      a2,
                      (struct IAudioMediaType *)Srca,
                      &v43,
                      0LL) >= 0 )
          {
            v41 = *a5;
            v19 = v43;
            v24 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43);
            if ( (unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v41, a2, v24, Src, 0LL) )
            {
              v23 = 1657LL;
            }
            else
            {
              v25 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 40LL))(v22);
              if ( (int)CloneWaveFormat(v25, a8) >= 0 )
              {
                if ( *a8 )
                {
                  v55 = 0;
                  goto LABEL_28;
                }
                v23 = 1661LL;
              }
              else
              {
                v23 = 1660LL;
              }
            }
            goto LABEL_25;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x676,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v19 = v43;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x673,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v18 = Srca;
        }
LABEL_26:
        v55 = -2004287480;
LABEL_28:
        if ( v19 )
          ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
        if ( v18 )
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v18->wFormatTag + 16LL))(v18);
        if ( v22 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
        goto LABEL_67;
      }
      if ( v17 == -2004287480 )
      {
        Srca = 0LL;
        v41 = *a6;
        DeviceDefaults = GetDeviceDefaults(a1, a2, &v41, &Srca, 0LL, 0LL, 0LL);
        v27 = Srca;
        if ( DeviceDefaults < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x687,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v55 = -2004287480;
LABEL_66:
          CoTaskMemFree(v27);
          Srca = 0LL;
LABEL_67:
          CoTaskMemFree(v44);
          v44 = 0LL;
          v15 = v55;
          goto LABEL_72;
        }
        if ( v14->nSamplesPerSec != Srca->nSamplesPerSec )
        {
          pv = 0LL;
          v28 = CloneWaveFormat(Srca, (struct tWAVEFORMATEX **)&pv);
          v29 = (struct tWAVEFORMATEX *)pv;
          if ( v28 < 0 )
          {
            v30 = 1676LL;
LABEL_43:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v30,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            v55 = -2004287480;
LABEL_65:
            CoTaskMemFree(v29);
            pv = 0LL;
            goto LABEL_66;
          }
          nSamplesPerSec = v14->nSamplesPerSec;
          *((_DWORD *)pv + 1) = nSamplesPerSec;
          v29->nAvgBytesPerSec = nSamplesPerSec * v29->nBlockAlign;
          v41 = *a6;
          if ( (int)ConnectorSupportsFormat(a1, (unsigned int)a2, v29, &v41) < 0 )
          {
            v30 = 1682LL;
            goto LABEL_43;
          }
          *(_QWORD *)&v41.Data1 = 0LL;
          v32 = 0LL;
          v43 = 0LL;
          v33 = 0LL;
          v47 = 0LL;
          v34 = CAudioMediaType::Create(v29, (unsigned int)v29->cbSize + 18, (struct IAudioMediaType **)&v41, 0.0, 0);
          v36 = *(_QWORD *)&v41.Data1;
          if ( v34 < 0 )
          {
            v37 = 1687LL;
LABEL_56:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v37,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            goto LABEL_57;
          }
          if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                      a1,
                      v35,
                      a2,
                      *(struct IAudioMediaType **)&v41.Data1,
                      &v43) >= 0 )
          {
            v49 = *a5;
            v32 = v43;
            if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(a1, &v49, a2, v43, &v47, 0LL) >= 0 )
            {
              v49 = *a5;
              v33 = v47;
              v38 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v47->lpVtbl->GetAudioFormat)(v47);
              if ( (unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v49, a2, v38, v14, 0LL) )
              {
                v37 = 1699LL;
              }
              else
              {
                v39 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 40LL))(v36);
                if ( (int)CloneWaveFormat(v39, a8) >= 0 )
                {
                  if ( *a8 )
                  {
                    v55 = 0;
                    goto LABEL_59;
                  }
                  v37 = 1703LL;
                }
                else
                {
                  v37 = 1702LL;
                }
              }
              goto LABEL_56;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x69F,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            v33 = v47;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x69B,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            v32 = v43;
          }
LABEL_57:
          v55 = -2004287480;
LABEL_59:
          if ( v33 )
            ((void (__fastcall *)(struct IAudioMediaType *))v33->lpVtbl->Release)(v33);
          if ( v32 )
            ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          goto LABEL_65;
        }
        CoTaskMemFree(Srca);
        Srca = 0LL;
      }
      CoTaskMemFree(v44);
      v44 = 0LL;
    }
    v16 = 1711LL;
    goto LABEL_71;
  }
  v41 = *a6;
  if ( (int)GetDeviceDefaults(a1, a2, &v41, a8, 0LL, 0LL, 0LL) < 0 )
  {
    v15 = -2004287480;
    v16 = 1631LL;
    goto LABEL_71;
  }
  if ( !*a8 )
  {
    v15 = -2004287480;
    v16 = 1632LL;
    goto LABEL_71;
  }
  v15 = 0;
LABEL_72:
  CoTaskMemFree(v14);
  v48 = 0LL;
  CoTaskMemFree(v12);
  return v15;
}
