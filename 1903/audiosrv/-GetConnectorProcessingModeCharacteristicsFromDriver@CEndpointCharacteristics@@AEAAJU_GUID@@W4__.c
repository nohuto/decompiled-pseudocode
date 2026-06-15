/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180117CCC
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1801169E4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180059B00 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x180059C98 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180116E6C (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        struct PacketSizeConstraints *a4,
        bool a5,
        __int64 a6,
        __int64 *a7)
{
  GUID fmtid; // xmm0
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  HRESULT v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // rcx
  char *v18; // r14
  int v19; // edi
  char *v20; // rcx
  void *v21; // rcx
  struct _GUID *v22; // rbx
  CConnectorProcessingModeCharacteristics *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v27; // rcx
  struct _GUID v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+70h] [rbp-90h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v31; // [rsp+88h] [rbp-78h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // [rsp+90h] [rbp-70h]
  LPVOID ppv; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v36; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h] BYREF
  int v41[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v44; // [rsp+E0h] [rbp-20h] BYREF
  char v45; // [rsp+E8h] [rbp-18h]
  PROPVARIANT v46; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  struct _GUID *v49; // [rsp+108h] [rbp+8h]
  struct PacketSizeConstraints *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  PROPVARIANT pvar[4]; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v53; // [rsp+140h] [rbp+40h] BYREF
  int v54; // [rsp+150h] [rbp+50h]
  GUID v55; // [rsp+158h] [rbp+58h] BYREF
  DWORD pid; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  pvar[3] = (PROPVARIANT)-2LL;
  v50 = a4;
  v49 = a2;
  v32 = eKeywordDetectorConnector;
  v28.Data1 = 590439624;
  *(_DWORD *)&v28.Data2 = 1283267372;
  *(_DWORD *)v28.Data4 = 1907779772;
  *(_DWORD *)&v28.Data4[4] = 1730509416;
  v54 = 1;
  v53 = v28;
  if ( a3 == 3 )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    v32 = eHostProcessConnector;
    v28.Data1 = -1702713381;
    *(_DWORD *)&v28.Data2 = 1102331579;
    *(_DWORD *)v28.Data4 = -1223116157;
    *(_DWORD *)&v28.Data4[4] = -65530063;
    fmtid = v28;
    pid = 1;
  }
  v55 = fmtid;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &v53,
         &v46);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7D,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_48;
  }
  memset(pvar, 0, 24);
  v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v55,
          pvar);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF80,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_47;
  }
  ppv = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppv);
  v12 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF83,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_46;
  }
  v42 = 0LL;
  v13 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v47, &v42);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF86,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_45;
  }
  *(_QWORD *)v41 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v42 + 24LL))(
          v42,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          1LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF89,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_44;
  }
  v40 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v41 + 56LL))(
          *(_QWORD *)v41,
          (unsigned int)v47,
          &v40);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8C,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_43;
  }
  v39 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *, int *))(*(_QWORD *)v40 + 104LL))(
          v40,
          23LL,
          &GUID_ce244c10_8a3e_461e_8390_6ff5fdaa8309,
          &v39,
          v41);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8F,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_42;
  }
  v31 = 0LL;
  *(_QWORD *)&v28.Data1 = &v31;
  *(_QWORD *)v28.Data4 = 0LL;
  v29 = 1;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v39 + 32LL))(v39, v28.Data4);
  if ( v29 )
  {
    v17 = **(void ***)&v28.Data1;
    **(_QWORD **)&v28.Data1 = *(_QWORD *)v28.Data4;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF92,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_40;
  }
  if ( !*((_DWORD *)v31 + 1) )
  {
    v10 = -2147023728;
    goto LABEL_40;
  }
  v18 = (char *)v31 + 8;
  v51 = *a7;
  v19 = 0;
  while ( 1 )
  {
    v20 = &v18[*(unsigned int *)&v18[4 * v19]];
    if ( *(_DWORD *)v20 >= 0x52u )
      break;
LABEL_38:
    if ( (unsigned int)++v19 >= *((_DWORD *)v31 + 1) )
    {
      *((_DWORD *)this + 47) = 1;
      v10 = 0;
      goto LABEL_40;
    }
  }
  pv = 0LL;
  p_pv = &pv;
  v44 = 0LL;
  v45 = 1;
  v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v20 + 64), &v44);
  if ( v45 )
  {
    v21 = *p_pv;
    *p_pv = v44;
    if ( v21 )
      CoTaskMemFree(v21);
  }
  if ( v10 >= 0 )
  {
    v22 = v49;
    v28 = *v49;
    if ( (int)CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                this,
                v32,
                &v28,
                (const struct tWAVEFORMATEX *)pv,
                v50,
                a5,
                a6,
                &v38,
                &v37,
                &v36,
                &v35,
                &v34) >= 0 )
    {
      v23 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                         0x30uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)&v28.Data1 = v23;
      if ( v23 )
      {
        *(struct _GUID *)v23 = *v22;
        *((_QWORD *)v23 + 2) = 0LL;
        *((_QWORD *)v23 + 3) = 0LL;
        *((_QWORD *)v23 + 4) = 0LL;
        *((_QWORD *)v23 + 5) = 0LL;
      }
      else
      {
        v23 = 0LL;
      }
      *(_QWORD *)&v28.Data1 = v23;
      CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        v23,
        (const struct tWAVEFORMATEX *)pv,
        v38,
        v37,
        v36,
        v35,
        v34);
      ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
        v51,
        &v28);
    }
    v24 = pv;
    pv = 0LL;
    if ( v24 )
      CoTaskMemFree(v24);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA2,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v10);
  v27 = pv;
  pv = 0LL;
  if ( v27 )
    CoTaskMemFree(v27);
LABEL_40:
  v25 = v31;
  v31 = 0LL;
  if ( v25 )
    CoTaskMemFree(v25);
LABEL_42:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
LABEL_43:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
LABEL_44:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v41);
LABEL_45:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
LABEL_46:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_47:
  PropVariantClear(pvar);
LABEL_48:
  PropVariantClear(&v46);
  return (unsigned int)v10;
}
