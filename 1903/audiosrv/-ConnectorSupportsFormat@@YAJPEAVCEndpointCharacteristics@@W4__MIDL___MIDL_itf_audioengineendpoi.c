/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800DD82C
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800DE65C (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180046510 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall ConnectorSupportsFormat(
        struct CEndpointCharacteristics *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r14d
  __int64 result; // rax
  __int64 v7; // rbx
  HRESULT Instance; // edi
  void *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, const struct _tagpropertykey *, PROPVARIANT *); // rax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rcx
  int v16; // eax
  void *v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  void *v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  int v41; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT pvar; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  struct _GUID v45; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 *p_pv; // [rsp+F0h] [rbp-10h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *ppv; // [rsp+F8h] [rbp-8h] BYREF
  int v52; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v49 = -2LL;
  v5 = a2;
  if ( (((_DWORD)a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    v45 = *a4;
    result = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
               (__int64)a1,
               a2,
               &a3->wFormatTag,
               &v45,
               0,
               0LL,
               0LL,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 2);
  *(_QWORD *)&v45.Data1 = v7;
  (*(void (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX *, struct _GUID *))(*(_QWORD *)v7 + 8LL))(
    v7,
    a2,
    a3,
    a4);
  pv = 0LL;
  p_pv = (__int64 *)&pv;
  ppv = 0LL;
  LOBYTE(v52) = 1;
  Instance = CreateKSFormatFromWFXFormat(a3, &ppv);
  if ( (_BYTE)v52 )
  {
    v9 = (void *)*p_pv;
    *p_pv = (__int64)ppv;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( Instance >= 0 )
  {
    v32 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v32);
    Instance = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x591,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10);
LABEL_62:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
      goto LABEL_63;
    }
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    p_pv = (__int64 *)0x4C7D1B2C233164C8LL;
    ppv = (struct KSDATAFORMAT_WAVEFORMATEX *)0x67257A6871B668BCLL;
    v52 = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 **, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(v32, &p_pv, &v46);
    Instance = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x594,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v11);
LABEL_61:
      PropVariantClear(&v46);
      goto LABEL_62;
    }
    pvar = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL);
    if ( v5 == 3 )
    {
      v13 = v12(v32, &PKEY_Endpoint_KeywordDetector_ConnectorId, &pvar);
      Instance = v13;
      if ( v13 < 0 )
      {
        v14 = 1433LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v13);
LABEL_60:
        PropVariantClear(&pvar);
        goto LABEL_61;
      }
    }
    else
    {
      v13 = v12(v32, &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId, &pvar);
      Instance = v13;
      if ( v13 < 0 )
      {
        v14 = 1437LL;
        goto LABEL_18;
      }
    }
    v40 = 0LL;
    p_pv = &v40;
    ppv = 0LL;
    LOBYTE(v52) = 1;
    Instance = CoCreateInstance(
                 &CLSID_MMDeviceEnumerator,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&ppv);
    if ( (_BYTE)v52 )
    {
      v15 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v15 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_59:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
      goto LABEL_60;
    }
    v39 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 40LL))(v40, v47, &v39);
    Instance = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A4,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v16);
LABEL_58:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
      goto LABEL_59;
    }
    v38 = 0LL;
    p_pv = &v38;
    ppv = 0LL;
    LOBYTE(v52) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, struct KSDATAFORMAT_WAVEFORMATEX **))(*(_QWORD *)v39 + 24LL))(
                 v39,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL,
                 0LL,
                 &ppv);
    if ( (_BYTE)v52 )
    {
      v17 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_57:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
      goto LABEL_58;
    }
    v35 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 56LL))(v38, (unsigned int)v43, &v35);
    Instance = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 1450LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v19);
LABEL_56:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_57;
    }
    v21 = (__int64)v35;
    if ( !v35 )
    {
      Instance = -2147023728;
      v19 = 2147943568LL;
      v20 = 1451LL;
      goto LABEL_35;
    }
    if ( v5 == 1 )
    {
      v36 = 0LL;
      v22 = (**v35)(v35, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e, &v36);
      Instance = v22;
      if ( v22 < 0 )
      {
        v23 = (unsigned int)v22;
        v24 = 1456LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        goto LABEL_56;
      }
      v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 24LL))(v36, &v41);
      Instance = v25;
      if ( v25 < 0 )
      {
        v23 = (unsigned int)v25;
        v24 = 1460LL;
        goto LABEL_43;
      }
      if ( v41 != 3 )
      {
        Instance = -2147418113;
        v23 = 2147549183LL;
        v24 = 1461LL;
        goto LABEL_43;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      v21 = (__int64)v35;
    }
    v37 = 0LL;
    p_pv = &v37;
    ppv = 0LL;
    LOBYTE(v52) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, struct KSDATAFORMAT_WAVEFORMATEX **))(*(_QWORD *)v21 + 104LL))(
                 v21,
                 1LL,
                 &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                 &ppv);
    if ( (_BYTE)v52 )
    {
      v26 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v26 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( Instance >= 0 )
    {
      v34 = 0;
      v29 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, int *))(*(_QWORD *)v37 + 24LL))(
              v37,
              pv,
              *(unsigned int *)pv,
              &v34);
      Instance = v29;
      if ( v29 >= 0 )
      {
        if ( v34 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
          PropVariantClear(&pvar);
          PropVariantClear(&v46);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
          v31 = pv;
          pv = 0LL;
          if ( v31 )
            CoTaskMemFree(v31);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          return 0LL;
        }
        Instance = -2004287480;
        goto LABEL_55;
      }
      v27 = (unsigned int)v29;
      v28 = 1468LL;
    }
    else
    {
      v27 = (unsigned int)Instance;
      v28 = 1465LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v27);
LABEL_55:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58E,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)Instance);
LABEL_63:
  v30 = pv;
  pv = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
  return (unsigned int)Instance;
}
