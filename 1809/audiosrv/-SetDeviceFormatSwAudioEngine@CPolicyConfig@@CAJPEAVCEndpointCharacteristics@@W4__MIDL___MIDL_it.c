/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4B14
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800CF3C0 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800D5A40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18010D19C (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine(
        struct IMMDevice **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3)
{
  char v4; // di
  int updated; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  char v9; // r12
  struct _GUID v10; // xmm6
  __int64 v11; // r14
  _QWORD *v12; // r15
  void *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  char v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  LPVOID v23[2]; // [rsp+38h] [rbp-59h] BYREF
  struct _GUID v24; // [rsp+48h] [rbp-49h] BYREF
  LPVOID *p_pv; // [rsp+58h] [rbp-39h]
  __int64 v26; // [rsp+68h] [rbp-29h]
  struct CEndpointCharacteristics **v27; // [rsp+70h] [rbp-21h]
  char v28; // [rsp+78h] [rbp-19h]
  struct _GUID v29; // [rsp+80h] [rbp-11h]
  LPVOID *v30; // [rsp+90h] [rbp-1h]
  char v31; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  struct CEndpointCharacteristics *v33; // [rsp+F8h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // [rsp+100h] [rbp+6Fh] BYREF
  struct IMMDevice *v35; // [rsp+108h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+7Fh] BYREF

  v34 = a2;
  v33 = (struct CEndpointCharacteristics *)a1;
  v26 = -2LL;
  v27 = &v33;
  v4 = 1;
  v28 = 1;
  v35 = 0LL;
  v35 = a1[2];
  ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->AddRef)(v35);
  if ( !a3 )
  {
    *(_QWORD *)&v24.Data1 = &v35;
    v24.Data4[0] = 1;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v33, 0, v34, 0LL);
    v6 = updated;
    if ( updated >= 0 )
    {
      v4 = 0;
      v28 = 0;
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        3196LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)updated);
    }
    CPolicyConfig::DisconnectHelper(v35);
    goto LABEL_47;
  }
  v23[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    v23,
    0LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v33 + 2) + 40LL))(*((_QWORD *)v33 + 2), v23);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v7 = ValidateUncompressedWaveFormatEx(a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 3205LL;
      goto LABEL_17;
    }
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v33, v34, &v24, 0LL, 0LL);
    v9 = 0;
    v10 = v24;
    v7 = CPolicyConfig::ConfirmDeviceFormat(v33, a3, &v24, v34, 0);
    v6 = v7;
    if ( v7 == -2004287480 )
    {
      CPolicyConfig::DisconnectHelper(v35);
      v9 = 1;
      v7 = CEndpointCharacteristics::TryAddFormat(v33, a3);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 3223LL;
        goto LABEL_17;
      }
      v24 = v10;
      v7 = CPolicyConfig::ConfirmDeviceFormat(v33, a3, &v24, v34, 0);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 3226LL;
        goto LABEL_17;
      }
    }
    else if ( v7 < 0 )
    {
      v8 = 3230LL;
      goto LABEL_17;
    }
    pv = 0LL;
    *(_QWORD *)&v24.Data1 = &pv;
    *(_QWORD *)v24.Data4 = 0LL;
    LOBYTE(p_pv) = 1;
    v6 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, LPVOID, _QWORD, unsigned __int8 *))(*(_QWORD *)g_PolicyConfig
                                                                                              + 32LL))(
           g_PolicyConfig,
           v23[0],
           0LL,
           v24.Data4);
    if ( (_BYTE)p_pv )
    {
      v11 = *(_QWORD *)v24.Data4;
      v12 = *(_QWORD **)&v24.Data1;
      v13 = **(void ***)&v24.Data1;
      if ( *(_QWORD *)v24.Data4 != **(_QWORD **)&v24.Data1 )
      {
        if ( v13 )
          CoTaskMemFree(v13);
        *v12 = v11;
      }
    }
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 3235LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v14);
LABEL_43:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_45;
    }
    v16 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v33, 0, v34, a3);
    v6 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 3238LL;
      goto LABEL_27;
    }
    *(_QWORD *)&v24.Data1 = &v33;
    *(_QWORD *)v24.Data4 = &v34;
    p_pv = &pv;
    v29 = v24;
    v30 = &pv;
    v17 = 1;
    v31 = 1;
    v18 = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(v33, 0);
    v6 = v18;
    if ( v18 >= 0 )
    {
      v20 = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(v33, 3);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCB3,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v20);
      if ( !v9 )
      {
        *(_QWORD *)&v24.Data1 = 0LL;
        v18 = CPolicyConfig::SetProcessingPeriodInternal(v33, (__int64 *)&v24);
        v6 = v18;
        if ( v18 < 0 )
        {
          v19 = 3266LL;
          goto LABEL_38;
        }
        CPolicyConfig::DisconnectHelper(v35);
      }
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v33, v34, &v24, 0LL, 0LL);
      v18 = CPolicyConfig::ConfirmDeviceFormat(v33, a3, &v24, v34, 1);
      v6 = v18;
      if ( v18 >= 0 )
      {
        v17 = 0;
        v4 = 0;
        v28 = 0;
        v6 = 0;
        goto LABEL_40;
      }
      v19 = 3282LL;
    }
    else
    {
      v19 = 3247LL;
    }
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v18);
LABEL_40:
    if ( v17 )
    {
      v21 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v33, 0, v34, (const struct tWAVEFORMATEX *)pv);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCAB,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v21);
    }
    goto LABEL_43;
  }
  v8 = 3203LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v7);
LABEL_45:
  if ( v23[0] )
    CoTaskMemFree(v23[0]);
LABEL_47:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  if ( v4 )
    CEndpointCharacteristics::ClearMixFormatCache(v33, 0LL);
  return (unsigned int)v6;
}
