/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801321C4
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x18012FD60 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180132AC0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1800066C8 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  __int128 v8; // rdi
  int v9; // eax
  int KSFormatFromWFXFormat; // ebx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  bool v16; // di
  const PROPERTYKEY *v17; // rax
  int v18; // r12d
  void *v19; // rcx
  HRESULT Instance; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int InterfaceIdFromMMDevice; // eax
  int RelatedInterfaceId; // eax
  __int64 v25; // rdi
  _QWORD *v26; // rsi
  void *v27; // rcx
  __int128 v28; // rdi
  void *v29; // rcx
  HRESULT v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  void *v35; // rcx
  void *v36; // rcx
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdx
  PROPVARIANT *v40; // rbx
  __int64 v41; // rcx
  IPropertyStore *v42; // rax
  IPropertyStore *v43; // rax
  IMMDeviceCollection *v44; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  __int128 v47; // [rsp+58h] [rbp-B0h] BYREF
  char v48; // [rsp+68h] [rbp-A0h]
  LPVOID v49; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v50; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v52; // [rsp+90h] [rbp-78h] BYREF
  IMMDeviceCollection *v53; // [rsp+98h] [rbp-70h] BYREF
  IPropertyStore *v54; // [rsp+A0h] [rbp-68h] BYREF
  UINT v55; // [rsp+A8h] [rbp-60h] BYREF
  UINT v56; // [rsp+ACh] [rbp-5Ch] BYREF
  LPVOID v57; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *Src; // [rsp+C8h] [rbp-40h]
  IPropertyStore *v61; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-30h] BYREF
  PROPVARIANT *p_pvar; // [rsp+E0h] [rbp-28h] BYREF
  char v64; // [rsp+E8h] [rbp-20h]
  CLSID *v65; // [rsp+F0h] [rbp-18h]
  GUID *v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  PROPVARIANT *v68; // [rsp+108h] [rbp+0h]
  char v69; // [rsp+110h] [rbp+8h]
  GUID fmtid; // [rsp+118h] [rbp+10h] BYREF
  DWORD pid; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v67 = -2LL;
  v66 = a3;
  v65 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  *((_QWORD *)&v8 + 1) = 0LL;
  v54 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v54);
  KSFormatFromWFXFormat = v9;
  if ( v9 >= 0 )
  {
    v62 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c,
            &v62);
    KSFormatFromWFXFormat = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 54LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v13,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)v12);
LABEL_106:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v62);
      goto LABEL_107;
    }
    if ( !v62 )
    {
      KSFormatFromWFXFormat = -2147418113;
      v12 = 2147549183LL;
      v13 = 55LL;
      goto LABEL_7;
    }
    v61 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v62 + 40LL))(v62, 0LL, &v61);
    KSFormatFromWFXFormat = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        59LL,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v14);
LABEL_105:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v61);
      goto LABEL_106;
    }
    pvar = 0LL;
    v59 = 0LL;
    Src = 0LL;
    p_pvar = &pvar;
    v64 = 1;
    v15 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v54->lpVtbl->GetValue)(
            v54,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            &pvar);
    KSFormatFromWFXFormat = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        68LL,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v15);
      PropVariantClear(&pvar);
      goto LABEL_105;
    }
    v16 = (_WORD)pvar == 72;
    PropVariantClear(&pvar);
    v53 = 0LL;
    v55 = 0;
    v56 = 0;
    v17 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a5 != eKeywordDetectorConnector )
      v17 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v17->fmtid;
    pid = v17->pid;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v62 + 48LL))(v62) || v16 )
      goto LABEL_103;
    pvar = 0LL;
    v59 = 0LL;
    Src = 0LL;
    v68 = &pvar;
    v69 = 1;
    v52 = 0LL;
    v18 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v18 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v54->lpVtbl->GetValue)(v54, &fmtid, &pvar) >= 0
      && (_WORD)pvar == 65 )
    {
      *(_QWORD *)&v8 = &v52;
      *(_QWORD *)&v47 = &v52;
      *((_QWORD *)&v47 + 1) = 0LL;
      v48 = 1;
      if ( (unsigned int)v59 < 0x12uLL || (unsigned int)v59 < (unsigned __int64)Src->cbSize + 18 )
      {
        KSFormatFromWFXFormat = -2147024809;
      }
      else
      {
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(Src, (struct KSDATAFORMAT_WAVEFORMATEX **)&v47 + 1);
        if ( !v48 )
          goto LABEL_29;
        v8 = v47;
      }
      v19 = *(void **)v8;
      if ( *((_QWORD *)&v8 + 1) != *(_QWORD *)v8 )
      {
        if ( v19 )
          CoTaskMemFree(v19);
        *(_QWORD *)v8 = *((_QWORD *)&v8 + 1);
      }
LABEL_29:
      if ( KSFormatFromWFXFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          98LL,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)KSFormatFromWFXFormat);
LABEL_97:
        if ( v52 )
          CoTaskMemFree(v52);
        PropVariantClear(&pvar);
        goto LABEL_104;
      }
      goto LABEL_90;
    }
    v49 = 0LL;
    if ( a5 == eKeywordDetectorConnector )
    {
      v57 = 0LL;
      pv = 0LL;
      v50 = 0LL;
      Instance = CoCreateInstance(
                   &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                   0LL,
                   0x17u,
                   &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
                   (LPVOID *)&v50);
      KSFormatFromWFXFormat = Instance;
      if ( Instance < 0 )
      {
        v21 = (unsigned int)Instance;
        v22 = 107LL;
LABEL_53:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v22,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v50);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v57 )
          CoTaskMemFree(v57);
LABEL_84:
        if ( v49 )
          CoTaskMemFree(v49);
        goto LABEL_97;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v49,
        0LL);
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v49);
      KSFormatFromWFXFormat = InterfaceIdFromMMDevice;
      if ( InterfaceIdFromMMDevice < 0 )
      {
        v21 = (unsigned int)InterfaceIdFromMMDevice;
        v22 = 108LL;
        goto LABEL_53;
      }
      v47 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v57,
        0LL);
      RelatedInterfaceId = mmdDevGetRelatedInterfaceId(v49, &v47, &v57);
      KSFormatFromWFXFormat = RelatedInterfaceId;
      if ( RelatedInterfaceId < 0 )
      {
        v21 = (unsigned int)RelatedInterfaceId;
        v22 = 109LL;
        goto LABEL_53;
      }
      *(_QWORD *)&v47 = &pv;
      *((_QWORD *)&v47 + 1) = 0LL;
      v48 = 1;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, char *))(*(_QWORD *)&v50->wFormatTag + 32LL))(
                                v50,
                                v57,
                                0LL,
                                (char *)&v47 + 8);
      if ( v48 )
      {
        v25 = *((_QWORD *)&v47 + 1);
        v26 = (_QWORD *)v47;
        v27 = *(void **)v47;
        if ( *((_QWORD *)&v47 + 1) != *(_QWORD *)v47 )
        {
          if ( v27 )
            CoTaskMemFree(v27);
          *v26 = v25;
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v22 = 111LL;
LABEL_52:
        v21 = (unsigned int)KSFormatFromWFXFormat;
        goto LABEL_53;
      }
      *(_QWORD *)&v47 = &v52;
      *((_QWORD *)&v47 + 1) = 0LL;
      v48 = 1;
      KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                (const struct tWAVEFORMATEX *)pv,
                                (struct KSDATAFORMAT_WAVEFORMATEX **)&v47 + 1);
      if ( v48 )
      {
        v28 = v47;
        v29 = *(void **)v47;
        if ( *((_QWORD *)&v47 + 1) != *(_QWORD *)v47 )
        {
          if ( v29 )
            CoTaskMemFree(v29);
          *(_QWORD *)v28 = *((_QWORD *)&v28 + 1);
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v22 = 112LL;
        goto LABEL_52;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v50);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v57 )
        CoTaskMemFree(v57);
LABEL_88:
      if ( v49 )
        CoTaskMemFree(v49);
LABEL_90:
      p_pvar = 0LL;
      ppv = (LPVOID *)&p_pvar;
      v38 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
              a1,
              &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
              23LL);
      KSFormatFromWFXFormat = v38;
      if ( v38 < 0 )
      {
        v39 = 128LL;
LABEL_96:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v39,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
        goto LABEL_97;
      }
      v40 = p_pvar;
      v41 = (__int64)v53;
      v53 = 0LL;
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      LODWORD(ppv) = v18;
      v38 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))*v40
             + 13))(
              v40,
              v52,
              *(unsigned int *)v52,
              1LL,
              ppv,
              &v53,
              &v55,
              &v56);
      KSFormatFromWFXFormat = v38;
      if ( v38 < 0 )
      {
        v39 = 131LL;
        goto LABEL_96;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
      if ( v52 )
        CoTaskMemFree(v52);
      PropVariantClear(&pvar);
LABEL_103:
      a6->APOInit.cbSize = 88;
      a6->APOInit.clsid = *v65;
      v42 = v54;
      v54 = 0LL;
      a6->pAPOEndpointProperties = v42;
      v43 = v61;
      v61 = 0LL;
      a6->pAPOSystemEffectsProperties = v43;
      a6->pReserved = 0LL;
      v44 = v53;
      v53 = 0LL;
      a6->pDeviceCollection = v44;
      a6->nSoftwareIoDeviceInCollection = v55;
      a6->nSoftwareIoConnectorIndex = v56;
      a6->AudioProcessingMode = *v66;
      a6->InitializeForDiscoveryOnly = a4;
      KSFormatFromWFXFormat = 0;
LABEL_104:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_105;
    }
    v50 = 0LL;
    pv = 0LL;
    v30 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
            &pv);
    KSFormatFromWFXFormat = v30;
    if ( v30 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v49,
        0LL);
      v33 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v49);
      KSFormatFromWFXFormat = v33;
      if ( v33 >= 0 )
      {
        *(_QWORD *)&v47 = &v50;
        *((_QWORD *)&v47 + 1) = 0LL;
        v48 = 1;
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, char *))(*(_QWORD *)pv + 32LL))(
                                  pv,
                                  v49,
                                  0LL,
                                  (char *)&v47 + 8);
        if ( v48 )
        {
          v34 = *((_QWORD *)&v47 + 1);
          v35 = *(void **)v47;
          if ( *((_QWORD *)&v47 + 1) != *(_QWORD *)v47 )
          {
            if ( v35 )
              CoTaskMemFree(v35);
            *(_QWORD *)v47 = v34;
          }
        }
        if ( KSFormatFromWFXFormat >= 0 )
        {
          *(_QWORD *)&v47 = &v52;
          *((_QWORD *)&v47 + 1) = 0LL;
          v48 = 1;
          KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v50, (struct KSDATAFORMAT_WAVEFORMATEX **)&v47 + 1);
          if ( v48 )
          {
            v36 = *(void **)v47;
            v37 = *((_QWORD *)&v47 + 1);
            if ( *((_QWORD *)&v47 + 1) != *(_QWORD *)v47 )
            {
              if ( v36 )
                CoTaskMemFree(v36);
              *(_QWORD *)v47 = v37;
            }
          }
          if ( KSFormatFromWFXFormat >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
            if ( v50 )
              CoTaskMemFree(v50);
            goto LABEL_88;
          }
          v32 = 123LL;
        }
        else
        {
          v32 = 122LL;
        }
        v31 = (unsigned int)KSFormatFromWFXFormat;
      }
      else
      {
        v31 = (unsigned int)v33;
        v32 = 121LL;
      }
    }
    else
    {
      v31 = (unsigned int)v30;
      v32 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v32,
      (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)v31);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
    if ( v50 )
      CoTaskMemFree(v50);
    goto LABEL_84;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    50LL,
    (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
    (const char *)(unsigned int)v9);
LABEL_107:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v54);
  return (unsigned int)KSFormatFromWFXFormat;
}
