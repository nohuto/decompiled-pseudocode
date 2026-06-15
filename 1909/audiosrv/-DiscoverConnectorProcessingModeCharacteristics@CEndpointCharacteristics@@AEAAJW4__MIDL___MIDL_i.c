/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1801164E4
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800524FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B80 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BC94 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000C354 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800533A0 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005479C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180062C8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800C108C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801133C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1801155EC (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1801177CC (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x18011CDF0 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        bool a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r12
  int v11; // edi
  _DWORD *v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // esi
  int v16; // r15d
  __int64 v17; // rsi
  int ConnectorProcessingModeCharacteristicsFromDriver; // eax
  CConnectorProcessingModeCharacteristics *v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+54h] [rbp-ACh]
  size_t Size; // [rsp+58h] [rbp-A8h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  GUID v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  int cchMax[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v34; // [rsp+A0h] [rbp-60h]
  LPOLESTR lpsz; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  __m256i v38; // [rsp+D0h] [rbp-30h]
  __int128 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  __int64 v42[2]; // [rsp+120h] [rbp+20h] BYREF
  __m256i v43; // [rsp+130h] [rbp+30h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+60h]
  GUID rguid; // [rsp+170h] [rbp+70h] BYREF
  struct _GUID v47; // [rsp+180h] [rbp+80h] BYREF
  wchar_t pszDest[1024]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+9D8h] [rbp+8D8h]

  v41 = -2LL;
  v34 = a4;
  LODWORD(Size) = a3;
  v9 = a2;
  v32 = a5;
  v36 = a8;
  v11 = 0;
  v25 = 0LL;
  v47 = GUID_00000000_0000_0000_0000_000000000000;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( !a2 )
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      this,
      eHostProcessConnector,
      &v47,
      0LL,
      0LL);
  v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (__int64)v12;
  *(_QWORD *)&v31.Data1 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    v12[2] = 0;
    v12[3] = 0;
  }
  else
  {
    v13 = 0LL;
  }
  v25 = v13;
  if ( !v13 )
  {
    v11 = -2147024882;
    goto LABEL_32;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)&v26, (__int64)this + 16 * v9 + 72);
  if ( v27 != *((_DWORD *)this + 4 * v9 + 20) )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_32;
  }
  v14 = CAudioSignalProcessingModeArray::AddMultiple(
          (CAudioSignalProcessingModeArray *)&v26,
          *((_DWORD *)this + 4 * v9 + 376),
          *((const struct _GUID **)this + 2 * v9 + 187));
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v14);
    v11 = v15;
    goto LABEL_32;
  }
  v16 = 0;
  if ( v27 <= 0 )
  {
LABEL_31:
    v22 = v13;
    v13 = 0LL;
    *v36 = v22;
    goto LABEL_32;
  }
  v17 = a7;
  while ( 1 )
  {
    v31 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v26, v16);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &rguid, v9, &v31, 0);
    v31 = rguid;
    ConnectorProcessingModeCharacteristicsFromDriver = CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
                                                         this,
                                                         a6,
                                                         v17,
                                                         (__int64)&v25);
    v13 = v25;
    if ( !ConnectorProcessingModeCharacteristicsFromDriver )
      goto LABEL_30;
    v19 = (CConnectorProcessingModeCharacteristics *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v31.Data1 = v19;
    if ( v19 )
    {
      *(GUID *)v19 = rguid;
      *((_QWORD *)v19 + 2) = 0LL;
      *((_QWORD *)v19 + 3) = 0LL;
      *((_QWORD *)v19 + 4) = 0LL;
      *((_QWORD *)v19 + 5) = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    *(_QWORD *)&v31.Data1 = v19;
    if ( !v19 )
      break;
    *(_QWORD *)&v37 = v19;
    *((_QWORD *)&v37 + 1) = this;
    v38.m256i_i32[0] = v9;
    *(GUID *)((char *)v38.m256i_i64 + 4) = rguid;
    v38.m256i_i64[3] = v32;
    LOBYTE(v39) = a6;
    *((_QWORD *)&v39 + 1) = a7;
    v40 = a9;
    *(_OWORD *)v42 = v37;
    v43 = v38;
    v44 = v39;
    v45 = a9;
    *(GUID *)cchMax = rguid;
    v11 = CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___(
            this,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v9,
            (unsigned int)Size,
            v34,
            cchMax,
            (__int128 *)v42);
    if ( v11 < 0 )
    {
      CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v19);
      goto LABEL_40;
    }
    if ( !*((_DWORD *)v19 + 6) )
    {
      pv[0] = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), pv) >= 0 )
      {
        *(_QWORD *)cchMax = 0LL;
        LODWORD(v24) = v9;
        if ( (int)StringCchPrintfExW(
                    pszDest,
                    0x400uLL,
                    &lpsz,
                    (unsigned __int64 *)cchMax,
                    0,
                    L"[%s], connector [%d] has no supported formats for mode - ",
                    pv[0],
                    v24) >= 0 )
        {
          StringFromGUID2(&rguid, lpsz, cchMax[0]);
          LogEPCProductionAssert(v20, pszDest);
        }
      }
      CoTaskMemFree(pv[0]);
      *((_DWORD *)this + 47) = 1;
      v21 = *(_QWORD *)&v47.Data1 - *(_QWORD *)&rguid.Data1;
      if ( *(_QWORD *)&v47.Data1 == *(_QWORD *)&rguid.Data1 )
        v21 = *(_QWORD *)v47.Data4 - *(_QWORD *)rguid.Data4;
      if ( !v21 )
        *((_QWORD *)this + 20) = 0LL;
    }
    if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                          v13,
                          &v31) )
    {
      v11 = -2147024882;
      CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v19);
      goto LABEL_32;
    }
    v17 = a7;
LABEL_30:
    if ( ++v16 >= v27 )
      goto LABEL_31;
  }
  v11 = -2147024882;
LABEL_40:
  v13 = v25;
LABEL_32:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v26);
  if ( v13 )
  {
    if ( *(_QWORD *)v13 )
    {
      free(*(void **)v13);
      *(_QWORD *)v13 = 0LL;
    }
    *(_DWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 12) = 0;
    operator delete((void *)v13, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v11;
}
