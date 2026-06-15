/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000A740
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008D30 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009F80 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400310B0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140045EB0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  BOOL v6; // r15d
  IMMDeviceCollection *v8; // rbx
  int v9; // eax
  int KSFormatFromWFXFormat; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // di
  const PROPERTYKEY *v15; // rax
  int v16; // r13d
  char *v17; // rsi
  _WORD *v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  PROPVARIANT *v21; // rdi
  IMMDeviceCollection *v22; // rcx
  IPropertyStore *v23; // rax
  IPropertyStore *v24; // rax
  IMMDeviceCollection *v25; // rax
  HRESULT Instance; // eax
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int InterfaceIdFromMMDevice; // eax
  void *v31; // rsi
  DWORD LastError; // edi
  int RelatedInterfaceId; // eax
  struct tWAVEFORMATEX *v34; // rsi
  struct tWAVEFORMATEX *v35; // r15
  void *v36; // rcx
  struct tWAVEFORMATEX *v37; // rsi
  void *v38; // rcx
  struct tWAVEFORMATEX *v39; // r15
  void *v40; // rcx
  HRESULT v41; // eax
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // eax
  struct tWAVEFORMATEX *v45; // rsi
  struct tWAVEFORMATEX *v46; // r15
  void *v47; // rcx
  struct tWAVEFORMATEX *v48; // rsi
  void *v49; // rcx
  struct tWAVEFORMATEX *v50; // r15
  __int64 v51; // rdx
  int ppv; // [rsp+28h] [rbp-E0h]
  LPVOID *ppva; // [rsp+28h] [rbp-E0h]
  int ppvb; // [rsp+28h] [rbp-E0h]
  int ppvc; // [rsp+28h] [rbp-E0h]
  LPVOID v57; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v58; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v59; // [rsp+70h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v60[2]; // [rsp+78h] [rbp-90h] BYREF
  char v61; // [rsp+88h] [rbp-80h]
  LPVOID pv; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v63; // [rsp+A0h] [rbp-68h] BYREF
  IMMDeviceCollection *v64; // [rsp+A8h] [rbp-60h]
  IPropertyStore *v65; // [rsp+B0h] [rbp-58h] BYREF
  UINT v66; // [rsp+B8h] [rbp-50h]
  UINT v67; // [rsp+BCh] [rbp-4Ch]
  PROPVARIANT pvar; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D0h] [rbp-38h]
  IPropertyStore *v71; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-28h] BYREF
  PROPVARIANT *p_pvar; // [rsp+E8h] [rbp-20h] BYREF
  char v74; // [rsp+F0h] [rbp-18h]
  CLSID *v75; // [rsp+F8h] [rbp-10h]
  GUID *v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h]
  PROPVARIANT *v78; // [rsp+110h] [rbp+8h]
  char v79; // [rsp+118h] [rbp+10h]
  GUID fmtid; // [rsp+120h] [rbp+18h] BYREF
  DWORD pid; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v77 = -2LL;
  v6 = a4;
  v76 = a3;
  v75 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v8 = 0LL;
  v65 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v65);
  KSFormatFromWFXFormat = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v9,
      ppv);
    goto LABEL_42;
  }
  v72 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
          a1,
          &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c,
          &v72);
  KSFormatFromWFXFormat = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v11,
      ppv);
  }
  else
  {
    if ( v72 )
    {
      v71 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v72 + 40LL))(v72, 0LL, &v71);
      KSFormatFromWFXFormat = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v12,
          ppv);
      }
      else
      {
        pvar = 0LL;
        v69 = 0LL;
        Src = 0LL;
        p_pvar = &pvar;
        v74 = 1;
        v13 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v65->lpVtbl->GetValue)(
                v65,
                &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                &pvar);
        KSFormatFromWFXFormat = v13;
        if ( v13 >= 0 )
        {
          v14 = (_WORD)pvar == 72;
          PropVariantClear(&pvar);
          v64 = 0LL;
          v66 = 0;
          v67 = 0;
          v15 = &PKEY_AudioEngine_DeviceFormat;
          if ( a5 == eKeywordDetectorConnector )
            v15 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
          fmtid = v15->fmtid;
          pid = v15->pid;
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72) || v14 )
            goto LABEL_35;
          pvar = 0LL;
          v69 = 0LL;
          Src = 0LL;
          v78 = &pvar;
          v79 = 1;
          pv = 0LL;
          v16 = 0;
          if ( a5 == eKeywordDetectorConnector )
            v16 = 3;
          if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v65->lpVtbl->GetValue)(v65, &fmtid, &pvar) >= 0
            && (_WORD)pvar == 65 )
          {
            v17 = 0LL;
            v18 = Src;
            if ( (unsigned int)v69 < 0x12uLL )
            {
              KSFormatFromWFXFormat = -2147024809;
            }
            else
            {
              v19 = *((unsigned __int16 *)Src + 8);
              if ( (unsigned int)v69 < (unsigned __int64)(v19 + 18) )
              {
                KSFormatFromWFXFormat = -2147024809;
              }
              else
              {
                KSFormatFromWFXFormat = 0;
                if ( (unsigned int)v19 < 0x16 && *(_WORD *)Src == 0xFFFE )
                {
                  KSFormatFromWFXFormat = -2147024809;
                }
                else
                {
                  v17 = (char *)CoTaskMemAlloc(v19 + 82);
                  if ( v17 )
                  {
                    *(_DWORD *)v17 = (unsigned __int16)v18[8] + 82;
                    *(_QWORD *)(v17 + 4) = 0LL;
                    *((_DWORD *)v17 + 3) = 0;
                    *((GUID *)v17 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                    *((GUID *)v17 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                    memcpy_0(v17 + 64, v18, (unsigned __int16)v18[8] + 18LL);
                    if ( *v18 == 0xFFFE )
                    {
                      *((_OWORD *)v17 + 2) = *(_OWORD *)(v18 + 12);
                    }
                    else
                    {
                      *((GUID *)v17 + 2) = GUID_00000000_0000_0010_8000_00aa00389b71;
                      *((_DWORD *)v17 + 8) = (unsigned __int16)*v18;
                    }
                  }
                  else
                  {
                    KSFormatFromWFXFormat = -2147024882;
                  }
                }
              }
            }
            if ( v17 != pv )
            {
              if ( pv )
                CoTaskMemFree(pv);
              pv = v17;
            }
            if ( KSFormatFromWFXFormat < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x62,
                (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                (const char *)(unsigned int)KSFormatFromWFXFormat,
                ppv);
              goto LABEL_124;
            }
            v6 = a4;
LABEL_26:
            p_pvar = 0LL;
            ppva = (LPVOID *)&p_pvar;
            v20 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                    a1,
                    &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                    23LL);
            KSFormatFromWFXFormat = v20;
            if ( v20 < 0 )
            {
              v51 = 128LL;
            }
            else
            {
              v21 = p_pvar;
              v22 = v64;
              v64 = 0LL;
              if ( v22 )
                ((void (__fastcall *)(IMMDeviceCollection *))v22->lpVtbl->Release)(v22);
              LODWORD(ppva) = v16;
              v20 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64))*v21 + 13))(
                      v21,
                      pv,
                      *(unsigned int *)pv,
                      1LL);
              KSFormatFromWFXFormat = v20;
              if ( v20 >= 0 )
              {
                if ( p_pvar )
                  (*((void (__fastcall **)(PROPVARIANT *))*p_pvar + 2))(p_pvar);
                if ( pv )
                  CoTaskMemFree(pv);
                PropVariantClear(&pvar);
LABEL_35:
                a6->APOInit.cbSize = 88;
                a6->APOInit.clsid = *v75;
                v23 = v65;
                v65 = 0LL;
                a6->pAPOEndpointProperties = v23;
                v24 = v71;
                v71 = 0LL;
                a6->pAPOSystemEffectsProperties = v24;
                a6->pReserved = 0LL;
                v25 = v64;
                v64 = 0LL;
                a6->pDeviceCollection = v25;
                a6->nSoftwareIoDeviceInCollection = v66;
                a6->nSoftwareIoConnectorIndex = v67;
                a6->AudioProcessingMode = *v76;
                a6->InitializeForDiscoveryOnly = v6;
                KSFormatFromWFXFormat = 0;
LABEL_36:
                if ( v8 )
                  ((void (__fastcall *)(IMMDeviceCollection *))v8->lpVtbl->Release)(v8);
                goto LABEL_38;
              }
              v51 = 131LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v51,
              (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
              (const char *)(unsigned int)v20,
              (int)ppva);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&p_pvar);
LABEL_124:
            if ( pv )
              CoTaskMemFree(pv);
            PropVariantClear(&pvar);
            v8 = v64;
            goto LABEL_36;
          }
          v57 = 0LL;
          if ( a5 == eKeywordDetectorConnector )
          {
            v63 = 0LL;
            v59 = 0LL;
            v58 = 0LL;
            Instance = CoCreateInstance(
                         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                         0LL,
                         0x17u,
                         &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
                         (LPVOID *)&v58);
            KSFormatFromWFXFormat = Instance;
            if ( Instance < 0 )
            {
              v28 = (unsigned int)Instance;
              v29 = 107LL;
LABEL_83:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v29,
                (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                (const char *)v28,
                ppvb);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v58);
              if ( v59 )
                CoTaskMemFree(v59);
              if ( v63 )
                CoTaskMemFree(v63);
LABEL_117:
              if ( v57 )
                CoTaskMemFree(v57);
              goto LABEL_124;
            }
            v57 = 0LL;
            InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v57);
            KSFormatFromWFXFormat = InterfaceIdFromMMDevice;
            if ( InterfaceIdFromMMDevice < 0 )
            {
              v28 = (unsigned int)InterfaceIdFromMMDevice;
              v29 = 108LL;
              goto LABEL_83;
            }
            *(_OWORD *)v60 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
            v31 = v63;
            if ( v63 )
            {
              LastError = GetLastError();
              CoTaskMemFree(v31);
              SetLastError(LastError);
            }
            v63 = 0LL;
            RelatedInterfaceId = mmdDevGetRelatedInterfaceId(v57, v60, &v63);
            KSFormatFromWFXFormat = RelatedInterfaceId;
            if ( RelatedInterfaceId < 0 )
            {
              v28 = (unsigned int)RelatedInterfaceId;
              v29 = 109LL;
              goto LABEL_83;
            }
            v60[0] = (struct tWAVEFORMATEX *)&v59;
            v60[1] = 0LL;
            v61 = 1;
            KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)&v58->wFormatTag + 32LL))(
                                      v58,
                                      v63,
                                      0LL,
                                      &v60[1]);
            if ( v61 )
            {
              v34 = v60[1];
              v35 = v60[0];
              v36 = *(void **)v60[0];
              if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
              {
                if ( v36 )
                  CoTaskMemFree(v36);
                *(_QWORD *)&v35->wFormatTag = v34;
              }
              v6 = a4;
            }
            if ( KSFormatFromWFXFormat < 0 )
            {
              v29 = 111LL;
LABEL_82:
              v28 = (unsigned int)KSFormatFromWFXFormat;
              goto LABEL_83;
            }
            v60[0] = (struct tWAVEFORMATEX *)&pv;
            v60[1] = 0LL;
            v61 = 1;
            KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v59, (struct KSDATAFORMAT_WAVEFORMATEX **)&v60[1]);
            if ( v61 )
            {
              v37 = v60[0];
              v38 = *(void **)v60[0];
              v39 = v60[1];
              if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
              {
                if ( v38 )
                  CoTaskMemFree(v38);
                *(_QWORD *)&v37->wFormatTag = v39;
              }
              v6 = a4;
            }
            if ( KSFormatFromWFXFormat < 0 )
            {
              v29 = 112LL;
              goto LABEL_82;
            }
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v58);
            if ( v59 )
              CoTaskMemFree(v59);
            v40 = v63;
            if ( v63 )
              goto LABEL_91;
            goto LABEL_92;
          }
          v58 = 0LL;
          v59 = 0LL;
          v41 = CoCreateInstance(
                  &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                  0LL,
                  0x17u,
                  &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
                  (LPVOID *)&v59);
          KSFormatFromWFXFormat = v41;
          if ( v41 >= 0 )
          {
            v57 = 0LL;
            v44 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v57);
            KSFormatFromWFXFormat = v44;
            if ( v44 >= 0 )
            {
              v60[0] = (struct tWAVEFORMATEX *)&v58;
              v60[1] = 0LL;
              v61 = 1;
              KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)&v59->wFormatTag + 32LL))(
                                        v59,
                                        v57,
                                        0LL,
                                        &v60[1]);
              if ( v61 )
              {
                v45 = v60[1];
                v46 = v60[0];
                v47 = *(void **)v60[0];
                if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
                {
                  if ( v47 )
                    CoTaskMemFree(v47);
                  *(_QWORD *)&v46->wFormatTag = v45;
                }
                v6 = a4;
              }
              if ( KSFormatFromWFXFormat >= 0 )
              {
                v60[0] = (struct tWAVEFORMATEX *)&pv;
                v60[1] = 0LL;
                v61 = 1;
                KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v58, (struct KSDATAFORMAT_WAVEFORMATEX **)&v60[1]);
                if ( v61 )
                {
                  v48 = v60[0];
                  v49 = *(void **)v60[0];
                  v50 = v60[1];
                  if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
                  {
                    if ( v49 )
                      CoTaskMemFree(v49);
                    *(_QWORD *)&v48->wFormatTag = v50;
                  }
                  v6 = a4;
                }
                if ( KSFormatFromWFXFormat >= 0 )
                {
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v59);
                  v40 = v58;
                  if ( v58 )
LABEL_91:
                    CoTaskMemFree(v40);
LABEL_92:
                  if ( v57 )
                    CoTaskMemFree(v57);
                  goto LABEL_26;
                }
                v43 = 123LL;
              }
              else
              {
                v43 = 122LL;
              }
              v42 = (unsigned int)KSFormatFromWFXFormat;
            }
            else
            {
              v42 = (unsigned int)v44;
              v43 = 121LL;
            }
          }
          else
          {
            v42 = (unsigned int)v41;
            v43 = 120LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v43,
            (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)v42,
            ppvc);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v59);
          if ( v58 )
            CoTaskMemFree(v58);
          goto LABEL_117;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v13,
          ppv);
        PropVariantClear(&pvar);
      }
LABEL_38:
      if ( v71 )
        ((void (__fastcall *)(IPropertyStore *))v71->lpVtbl->Release)(v71);
      goto LABEL_40;
    }
    KSFormatFromWFXFormat = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)0x8000FFFFLL,
      ppv);
  }
LABEL_40:
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
LABEL_42:
  if ( v65 )
    ((void (__fastcall *)(IPropertyStore *))v65->lpVtbl->Release)(v65);
  return (unsigned int)KSFormatFromWFXFormat;
}
