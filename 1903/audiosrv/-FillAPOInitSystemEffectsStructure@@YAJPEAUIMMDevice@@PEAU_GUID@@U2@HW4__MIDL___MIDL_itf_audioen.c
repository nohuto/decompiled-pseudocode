/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18013B124
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x180138CA0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013B834 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180046510 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  int v10; // eax
  HRESULT v11; // ebx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  bool v17; // bl
  const PROPERTYKEY *v18; // rax
  unsigned int v19; // r14d
  LPVOID *v20; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // rdx
  void *v22; // rax
  int v23; // eax
  void *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  PROPVARIANT *v31; // rbx
  __int64 v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  IPropertyStore *v35; // rax
  IPropertyStore *v36; // rax
  IMMDeviceCollection *v37; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  LPVOID v40; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A8h] BYREF
  IMMDeviceCollection *v42; // [rsp+68h] [rbp-A0h] BYREF
  IPropertyStore *v43; // [rsp+70h] [rbp-98h] BYREF
  LPVOID *p_pv; // [rsp+78h] [rbp-90h]
  struct KSDATAFORMAT_WAVEFORMATEX *v45; // [rsp+80h] [rbp-88h] BYREF
  char v46; // [rsp+88h] [rbp-80h]
  UINT v47; // [rsp+90h] [rbp-78h] BYREF
  UINT v48; // [rsp+94h] [rbp-74h] BYREF
  LPVOID v49; // [rsp+98h] [rbp-70h] BYREF
  PROPVARIANT pvar; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  struct tWAVEFORMATEX *Src; // [rsp+B0h] [rbp-58h]
  LPVOID v53; // [rsp+B8h] [rbp-50h] BYREF
  IPropertyStore *v54; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *p_pvar; // [rsp+D0h] [rbp-38h] BYREF
  char v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  PROPVARIANT *v59; // [rsp+E8h] [rbp-20h]
  char v60; // [rsp+F0h] [rbp-18h]
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v58 = -2LL;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v43 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
          a1,
          0LL,
          &v43);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v55 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
            &v55);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 54LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)v13);
LABEL_70:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v55);
      goto LABEL_71;
    }
    if ( !v55 )
    {
      v11 = -2147418113;
      v13 = 2147549183LL;
      v14 = 55LL;
      goto LABEL_7;
    }
    v54 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v55 + 40LL))(v55, 0LL, &v54);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v15);
LABEL_69:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v54);
      goto LABEL_70;
    }
    pvar = 0LL;
    v51 = 0LL;
    Src = 0LL;
    p_pvar = &pvar;
    v57 = 1;
    v16 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v43->lpVtbl->GetValue)(
            v43,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            &pvar);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v16);
      PropVariantClear(&pvar);
      goto LABEL_69;
    }
    v17 = (_WORD)pvar == 72;
    PropVariantClear(&pvar);
    v42 = 0LL;
    v47 = 0;
    v48 = 0;
    v18 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    v19 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v18 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v18->fmtid;
    pid = v18->pid;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55) || v17 )
      goto LABEL_67;
    pvar = 0LL;
    v51 = 0LL;
    Src = 0LL;
    v59 = &pvar;
    v60 = 1;
    v40 = 0LL;
    if ( a5 != eKeywordDetectorConnector )
      v19 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v43->lpVtbl->GetValue)(v43, &fmtid, &pvar) < 0
      || (_WORD)pvar != 65 )
    {
      v53 = 0LL;
      v11 = CoCreateInstance(
              &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
              0LL,
              0x17u,
              &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
              &v53);
      if ( v11 >= 0 )
      {
        v49 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v49,
          0LL);
        v23 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v49);
        v11 = v23;
        if ( v23 >= 0 )
        {
          pv = 0LL;
          p_pv = &pv;
          v45 = 0LL;
          v46 = 1;
          v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD, struct KSDATAFORMAT_WAVEFORMATEX **))(*(_QWORD *)v53 + 304LL))(
                  v53,
                  v49,
                  v19,
                  0LL,
                  &v45);
          if ( v46 )
          {
            v24 = *p_pv;
            *p_pv = v45;
            if ( v24 )
              CoTaskMemFree(v24);
          }
          if ( v11 >= 0 )
          {
            p_pv = &v40;
            v45 = 0LL;
            v46 = 1;
            v11 = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v45);
            if ( v46 )
            {
              v26 = *p_pv;
              *p_pv = v45;
              if ( v26 )
                CoTaskMemFree(v26);
            }
            if ( v11 >= 0 )
            {
              v28 = pv;
              pv = 0LL;
              if ( v28 )
                CoTaskMemFree(v28);
              if ( v49 )
                CoTaskMemFree(v49);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
LABEL_54:
              p_pvar = 0LL;
              ppv = (LPVOID *)&p_pvar;
              v29 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                      a1,
                      &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                      23LL);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 117LL;
LABEL_60:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v30,
                  (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                  (const char *)(unsigned int)v29);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
                goto LABEL_61;
              }
              v31 = p_pvar;
              v32 = (__int64)v42;
              v42 = 0LL;
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              LODWORD(ppv) = v19;
              v29 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))*v31
                     + 13))(
                      v31,
                      v40,
                      *(unsigned int *)v40,
                      1LL,
                      ppv,
                      &v42,
                      &v47,
                      &v48);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 120LL;
                goto LABEL_60;
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
              v34 = v40;
              v40 = 0LL;
              if ( v34 )
                CoTaskMemFree(v34);
              PropVariantClear(&pvar);
LABEL_67:
              a6->APOInit.cbSize = 88;
              a6->APOInit.clsid = *a2;
              v35 = v43;
              v43 = 0LL;
              a6->pAPOEndpointProperties = v35;
              v36 = v54;
              v54 = 0LL;
              a6->pAPOSystemEffectsProperties = v36;
              a6->pReserved = 0LL;
              v37 = v42;
              v42 = 0LL;
              a6->pDeviceCollection = v37;
              a6->nSoftwareIoDeviceInCollection = v47;
              a6->nSoftwareIoConnectorIndex = v48;
              a6->AudioProcessingMode = *a3;
              a6->InitializeForDiscoveryOnly = a4;
              v11 = 0;
LABEL_68:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
              goto LABEL_69;
            }
            v25 = 112LL;
          }
          else
          {
            v25 = 110LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)(unsigned int)v11);
          v27 = pv;
          pv = 0LL;
          if ( v27 )
            CoTaskMemFree(v27);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6A,
            (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)(unsigned int)v23);
        }
        if ( v49 )
          CoTaskMemFree(v49);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v11);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_61;
    }
    v20 = &v40;
    p_pv = &v40;
    v21 = 0LL;
    v45 = 0LL;
    v46 = 1;
    if ( (unsigned int)v51 < 0x12uLL || (unsigned int)v51 < (unsigned __int64)Src->cbSize + 18 )
    {
      v11 = -2147024809;
    }
    else
    {
      v11 = CreateKSFormatFromWFXFormat(Src, &v45);
      if ( !v46 )
        goto LABEL_27;
      v21 = v45;
      v20 = p_pv;
    }
    v22 = *v20;
    *v20 = v21;
    if ( v22 )
      CoTaskMemFree(v22);
LABEL_27:
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v11);
LABEL_61:
      v33 = v40;
      v40 = 0LL;
      if ( v33 )
        CoTaskMemFree(v33);
      PropVariantClear(&pvar);
      goto LABEL_68;
    }
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
    (const char *)(unsigned int)v10);
LABEL_71:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
  return (unsigned int)v11;
}
