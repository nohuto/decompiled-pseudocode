/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DCEF0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800CF60C (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800D0CE4 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800D1464 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800D2770 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=49
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *this,
        unsigned int a2,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  CEndpointCharacteristics *v11; // rdi
  struct tWAVEFORMATEX *v12; // r13
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  struct tWAVEFORMATEX *v15; // rbx
  int v16; // r15d
  void *v17; // rsi
  struct _GUID *v18; // rdx
  struct tWAVEFORMATEX *v19; // rbx
  struct tWAVEFORMATEX *v20; // rdi
  struct IAudioMediaType *v21; // r14
  const struct tWAVEFORMATEX *v22; // rax
  int v23; // eax
  const struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // r15
  DWORD nSamplesPerSec; // ecx
  struct tWAVEFORMATEX *v27; // r14
  struct _GUID *v28; // rdx
  struct IAudioMediaType *v29; // rbx
  struct IAudioMediaType *v30; // rdi
  __int64 v31; // r12
  const struct tWAVEFORMATEX *v32; // rax
  int v33; // eax
  const struct tWAVEFORMATEX *v34; // rax
  unsigned int v35; // ebx
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v38; // [rsp+50h] [rbp-61h] BYREF
  struct tWAVEFORMATEX *Srca[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v40; // [rsp+68h] [rbp-49h] BYREF
  struct IAudioMediaType *v41; // [rsp+78h] [rbp-39h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+80h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v43; // [rsp+88h] [rbp-29h] BYREF
  struct IAudioMediaType *v44; // [rsp+90h] [rbp-21h] BYREF
  struct _GUID v45; // [rsp+98h] [rbp-19h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-9h]

  v46 = -2LL;
  v11 = this;
  v12 = 0LL;
  v43 = 0LL;
  *a8 = 0LL;
  v42 = 0LL;
  if ( (int)CloneWaveFormat(Src, &v42) < 0 )
    goto LABEL_80;
  v40 = *a4;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v11,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                &v40,
                v13,
                &v43);
  v12 = v43;
  if ( MixFormat < 0 )
    goto LABEL_80;
  v40 = *a5;
  v15 = v42;
  if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(v11, &v40, a2, v43, v42, 0LL) )
  {
    v40 = *a6;
    GetDeviceDefaults(v11, (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2, &v40, a8, 0LL, 0LL, 0LL);
    goto LABEL_80;
  }
  if ( !a7 )
    goto LABEL_80;
  pv = 0LL;
  v40 = *a6;
  v16 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
          v11,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
          Src,
          &v40,
          (struct tWAVEFORMATEX **)&pv);
  v17 = pv;
  if ( v16 >= 0 )
  {
    Srca[0] = 0LL;
    v38 = 0LL;
    v41 = 0LL;
    if ( (int)CAudioMediaType::Create(
                (const struct tWAVEFORMATEX *)pv,
                (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                (struct IAudioMediaType **)Srca,
                0.0,
                0) < 0 )
    {
      if ( Srca[0] )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)Srca[0] + 16LL))(Srca[0]);
      goto LABEL_79;
    }
    v19 = Srca[0];
    if ( (int)DeriveDevicePipeFormatFromConnectorFormat(
                v11,
                v18,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                (struct IAudioMediaType *)Srca[0],
                (struct IAudioMediaType **)&v38) < 0 )
    {
      if ( v38 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v38->wFormatTag + 16LL))(v38);
      if ( v19 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
      goto LABEL_79;
    }
    v40 = *a5;
    v20 = v38;
    if ( DeriveMixFormatFromDevicePipeFormat(
           this,
           &v40,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
           (struct IAudioMediaType *)v38,
           &v41,
           0LL) < 0 )
    {
      if ( v41 )
        ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
      if ( v20 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag + 16LL))(v20);
      if ( v19 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
      goto LABEL_79;
    }
    v40 = *a5;
    v21 = v41;
    v22 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41);
    v23 = IsStreamFormatSupportedForMixFormat(this, &v40, a2, v22, Src, 0LL);
    v16 = v23;
    if ( v23 < 0 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
      if ( v20 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag + 16LL))(v20);
      if ( v19 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
      goto LABEL_79;
    }
    if ( !v23 )
    {
      v24 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag
                                                                                            + 40LL))(v19);
      CloneWaveFormat(v24, a8);
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
      if ( v20 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag + 16LL))(v20);
      (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
      CoTaskMemFree(v17);
      pv = 0LL;
      goto LABEL_80;
    }
    ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    if ( v20 )
      (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag + 16LL))(v20);
    if ( v19 )
      (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
    v15 = v42;
    v11 = this;
  }
  if ( v16 != -2004287480 )
  {
LABEL_79:
    CoTaskMemFree(v17);
    pv = 0LL;
    goto LABEL_80;
  }
  Srca[0] = 0LL;
  v40 = *a6;
  GetDeviceDefaults(v11, (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2, &v40, Srca, 0LL, 0LL, 0LL);
  v25 = Srca[0];
  if ( v15->nSamplesPerSec == Srca[0]->nSamplesPerSec )
  {
LABEL_78:
    CoTaskMemFree(v25);
    Srca[0] = 0LL;
    goto LABEL_79;
  }
  v38 = 0LL;
  if ( (int)CloneWaveFormat(Srca[0], &v38) < 0 )
  {
    CoTaskMemFree(v38);
    v38 = 0LL;
    CoTaskMemFree(v25);
    Srca[0] = 0LL;
    CoTaskMemFree(v17);
    pv = 0LL;
    goto LABEL_80;
  }
  nSamplesPerSec = v15->nSamplesPerSec;
  v27 = v38;
  v38->nSamplesPerSec = nSamplesPerSec;
  v27->nAvgBytesPerSec = nSamplesPerSec * v27->nBlockAlign;
  v40 = *a6;
  if ( (int)ConnectorSupportsFormat(v11, a2, v27, &v40) < 0 )
  {
LABEL_77:
    CoTaskMemFree(v27);
    v38 = 0LL;
    goto LABEL_78;
  }
  v41 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&v40.Data1 = 0LL;
  if ( (int)CAudioMediaType::Create(v27, (unsigned int)v27->cbSize + 18, &v41, 0.0, 0) < 0 )
  {
    if ( v41 )
      ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
LABEL_68:
    CoTaskMemFree(v27);
    v38 = 0LL;
    CoTaskMemFree(v25);
    Srca[0] = 0LL;
    CoTaskMemFree(v17);
    pv = 0LL;
    goto LABEL_80;
  }
  v29 = v41;
  if ( (int)DeriveDevicePipeFormatFromConnectorFormat(
              v11,
              v28,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              v41,
              &v44) < 0 )
  {
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_68;
  }
  v45 = *a5;
  v30 = v44;
  if ( DeriveMixFormatFromDevicePipeFormat(
         this,
         &v45,
         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
         v44,
         (struct IAudioMediaType **)&v40,
         0LL) < 0 )
  {
    if ( *(_QWORD *)&v40.Data1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v40.Data1 + 16LL))(*(_QWORD *)&v40.Data1);
    if ( v30 )
      ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_68;
  }
  v45 = *a5;
  v31 = *(_QWORD *)&v40.Data1;
  v32 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v40.Data1 + 40LL))(*(_QWORD *)&v40.Data1);
  v33 = IsStreamFormatSupportedForMixFormat(this, &v45, a2, v32, v42, 0LL);
  if ( v33 < 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( v30 )
      ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_68;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( v30 )
      ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_77;
  }
  v34 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->GetAudioFormat)(v29);
  CloneWaveFormat(v34, a8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v30 )
    ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
  ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
  CoTaskMemFree(v27);
  v38 = 0LL;
  CoTaskMemFree(v25);
  Srca[0] = 0LL;
  CoTaskMemFree(v17);
  pv = 0LL;
LABEL_80:
  v35 = *a8 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v42);
  v42 = 0LL;
  CoTaskMemFree(v12);
  return v35;
}
