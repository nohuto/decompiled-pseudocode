/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140008800
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008070 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000B45C (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14002942C (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1400439EC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
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
  IMMDeviceCollection *v7; // rbx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // di
  const PROPERTYKEY *v14; // rax
  unsigned int v15; // r15d
  int v16; // r13d
  char *v17; // rsi
  _WORD *v18; // r15
  __int64 v19; // rcx
  void *v20; // rcx
  int v21; // eax
  PROPVARIANT *v22; // rdi
  IMMDeviceCollection *v23; // rcx
  void *v24; // rcx
  IPropertyStore *v25; // rax
  IPropertyStore *v26; // rax
  IMMDeviceCollection *v27; // rax
  HRESULT v29; // eax
  int v30; // eax
  void *v31; // rcx
  __int64 v32; // rdx
  void *v33; // rcx
  struct tWAVEFORMATEX *v34; // rcx
  struct tWAVEFORMATEX *v35; // rcx
  __int64 v36; // rdx
  void *v37; // rcx
  int ppv; // [rsp+28h] [rbp-E0h]
  LPVOID *ppva; // [rsp+28h] [rbp-E0h]
  int ppvb; // [rsp+28h] [rbp-E0h]
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+60h] [rbp-A8h] BYREF
  IMMDeviceCollection *v43; // [rsp+68h] [rbp-A0h]
  IPropertyStore *v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  PROPVARIANT pvar; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  LPVOID v49; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v50; // [rsp+A0h] [rbp-68h] BYREF
  IPropertyStore *v51; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-58h] BYREF
  void **p_pv; // [rsp+B8h] [rbp-50h]
  struct KSDATAFORMAT_WAVEFORMATEX *v54; // [rsp+C0h] [rbp-48h] BYREF
  char v55; // [rsp+C8h] [rbp-40h]
  BOOL v56; // [rsp+D0h] [rbp-38h]
  PROPVARIANT *p_pvar; // [rsp+D8h] [rbp-30h] BYREF
  char v58; // [rsp+E0h] [rbp-28h]
  CLSID *v59; // [rsp+E8h] [rbp-20h]
  GUID *v60; // [rsp+F0h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-10h]
  PROPVARIANT *v62; // [rsp+100h] [rbp-8h]
  char v63; // [rsp+108h] [rbp+0h]
  GUID fmtid; // [rsp+110h] [rbp+8h] BYREF
  DWORD pid; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v61 = -2LL;
  v56 = a4;
  v60 = a3;
  v59 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v7 = 0LL;
  v44 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v44);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v8,
      ppv);
    goto LABEL_39;
  }
  v52 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
          a1,
          &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
          &v52);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v10,
      ppv);
  }
  else
  {
    if ( v52 )
    {
      v51 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v52 + 40LL))(v52, 0LL, &v51);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v11,
          ppv);
      }
      else
      {
        pvar = 0LL;
        v47 = 0LL;
        Src = 0LL;
        p_pvar = &pvar;
        v58 = 1;
        v12 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v44->lpVtbl->GetValue)(
                v44,
                &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                &pvar);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v13 = (_WORD)pvar == 72;
          PropVariantClear(&pvar);
          v43 = 0LL;
          v45 = 0LL;
          v14 = &PKEY_AudioEngine_DeviceFormat;
          if ( a5 == eKeywordDetectorConnector )
            v14 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
          fmtid = v14->fmtid;
          pid = v14->pid;
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v52 + 48LL))(v52) || v13 )
            goto LABEL_32;
          pvar = 0LL;
          v47 = 0LL;
          Src = 0LL;
          v62 = &pvar;
          v63 = 1;
          pv = 0LL;
          v15 = 3;
          v16 = 0;
          if ( a5 == eKeywordDetectorConnector )
            v16 = 3;
          if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v44->lpVtbl->GetValue)(v44, &fmtid, &pvar) >= 0
            && (_WORD)pvar == 65 )
          {
            v17 = 0LL;
            v18 = Src;
            if ( (unsigned int)v47 < 0x12uLL )
            {
              v9 = -2147024809;
            }
            else
            {
              v19 = *((unsigned __int16 *)Src + 8);
              if ( (unsigned int)v47 < (unsigned __int64)(v19 + 18) )
              {
                v9 = -2147024809;
              }
              else
              {
                v9 = 0;
                if ( (unsigned int)v19 < 0x16 && *(_WORD *)Src == 0xFFFE )
                {
                  v9 = -2147024809;
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
                    v9 = -2147024882;
                  }
                }
              }
            }
            v20 = pv;
            pv = v17;
            if ( v20 )
              CoTaskMemFree(v20);
            if ( v9 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x62,
                (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                (const char *)(unsigned int)v9,
                ppv);
              goto LABEL_83;
            }
LABEL_23:
            p_pvar = 0LL;
            ppva = (LPVOID *)&p_pvar;
            v21 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                    a1,
                    &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                    23LL);
            v9 = v21;
            if ( v21 < 0 )
            {
              v36 = 117LL;
            }
            else
            {
              v22 = p_pvar;
              v23 = v43;
              v43 = 0LL;
              if ( v23 )
                ((void (__fastcall *)(IMMDeviceCollection *))v23->lpVtbl->Release)(v23);
              LODWORD(ppva) = v16;
              v21 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64))*v22 + 13))(
                      v22,
                      pv,
                      *(unsigned int *)pv,
                      1LL);
              v9 = v21;
              if ( v21 >= 0 )
              {
                if ( p_pvar )
                  (*((void (__fastcall **)(PROPVARIANT *))*p_pvar + 2))(p_pvar);
                v24 = pv;
                pv = 0LL;
                if ( v24 )
                  CoTaskMemFree(v24);
                PropVariantClear(&pvar);
LABEL_32:
                a6->APOInit.cbSize = 88;
                a6->APOInit.clsid = *v59;
                v25 = v44;
                v44 = 0LL;
                a6->pAPOEndpointProperties = v25;
                v26 = v51;
                v51 = 0LL;
                a6->pAPOSystemEffectsProperties = v26;
                a6->pReserved = 0LL;
                v27 = v43;
                v43 = 0LL;
                a6->pDeviceCollection = v27;
                *(_QWORD *)&a6->nSoftwareIoDeviceInCollection = v45;
                a6->AudioProcessingMode = *v60;
                a6->InitializeForDiscoveryOnly = v56;
                v9 = 0;
LABEL_33:
                if ( v7 )
                  ((void (__fastcall *)(IMMDeviceCollection *))v7->lpVtbl->Release)(v7);
                goto LABEL_35;
              }
              v36 = 120LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v36,
              (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
              (const char *)(unsigned int)v21,
              (int)ppva);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&p_pvar);
LABEL_83:
            v37 = pv;
            pv = 0LL;
            if ( v37 )
              CoTaskMemFree(v37);
            PropVariantClear(&pvar);
            v7 = v43;
            goto LABEL_33;
          }
          v50 = 0LL;
          v29 = CoCreateInstance(
                  &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                  0LL,
                  0x17u,
                  &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
                  &v50);
          v9 = v29;
          if ( v29 >= 0 )
          {
            v49 = 0LL;
            v30 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v49);
            v9 = v30;
            if ( v30 >= 0 )
            {
              v42 = 0LL;
              p_pv = (void **)&v42;
              v54 = 0LL;
              v55 = 1;
              if ( a5 != eKeywordDetectorConnector )
                v15 = 0;
              v9 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)v50 + 304LL))(
                     v50,
                     v49,
                     v15,
                     0LL);
              if ( v55 )
              {
                v31 = *p_pv;
                *p_pv = v54;
                if ( v31 )
                  CoTaskMemFree(v31);
              }
              if ( v9 >= 0 )
              {
                p_pv = &pv;
                v54 = 0LL;
                v55 = 1;
                v9 = CreateKSFormatFromWFXFormat(v42, &v54);
                if ( v55 )
                {
                  v33 = *p_pv;
                  *p_pv = v54;
                  if ( v33 )
                    CoTaskMemFree(v33);
                }
                if ( v9 >= 0 )
                {
                  v35 = v42;
                  v42 = 0LL;
                  if ( v35 )
                    CoTaskMemFree(v35);
                  if ( v49 )
                    CoTaskMemFree(v49);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v50);
                  goto LABEL_23;
                }
                v32 = 112LL;
              }
              else
              {
                v32 = 110LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v32,
                (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                (const char *)(unsigned int)v9,
                (int)&v54);
              v34 = v42;
              v42 = 0LL;
              if ( v34 )
                CoTaskMemFree(v34);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x6A,
                (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                (const char *)(unsigned int)v30,
                ppvb);
            }
            if ( v49 )
              CoTaskMemFree(v49);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x67,
              (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
              (const char *)(unsigned int)v29,
              ppvb);
          }
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v50);
          goto LABEL_83;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v12,
          ppv);
        PropVariantClear(&pvar);
      }
LABEL_35:
      if ( v51 )
        ((void (__fastcall *)(IPropertyStore *))v51->lpVtbl->Release)(v51);
      goto LABEL_37;
    }
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)0x8000FFFFLL,
      ppv);
  }
LABEL_37:
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
LABEL_39:
  if ( v44 )
    ((void (__fastcall *)(IPropertyStore *))v44->lpVtbl->Release)(v44);
  return (unsigned int)v9;
}
