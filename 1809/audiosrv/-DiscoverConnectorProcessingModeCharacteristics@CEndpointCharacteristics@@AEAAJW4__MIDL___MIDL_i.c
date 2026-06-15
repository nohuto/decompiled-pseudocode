/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18010936C
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x18004BBA8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18004D1A0 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18004D3FC (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18004DEFC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004E468 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B2D1C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x180105B54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18010878C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180110A14 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // rsi
  int v11; // r12d
  int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // eax
  int v19; // esi
  CConnectorProcessingModeCharacteristics *v20; // rax
  CConnectorProcessingModeCharacteristics *v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+38h] [rbp-C8h]
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+58h] [rbp-A8h]
  struct _GUID v30; // [rsp+60h] [rbp-A0h] BYREF
  int cchMax[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  unsigned int *v33; // [rsp+88h] [rbp-78h]
  LPOLESTR lpsz; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __m256i v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41[2]; // [rsp+100h] [rbp+0h] BYREF
  __m256i v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+40h]
  GUID rguid; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v46; // [rsp+160h] [rbp+60h] BYREF
  wchar_t pszDest[1024]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+9C8h] [rbp+8C8h]

  v40 = -2LL;
  v33 = a4;
  LODWORD(Size) = a3;
  v9 = a2;
  v35 = a8;
  v11 = 0;
  v12 = 0;
  v32 = 0LL;
  v46 = GUID_00000000_0000_0000_0000_000000000000;
  v27 = 0LL;
  v28 = 0LL;
  if ( !a2 )
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      this,
      eHostProcessConnector,
      &v46,
      0LL,
      0LL);
  v13 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = (__int64)v13;
  *(_QWORD *)&v30.Data1 = v13;
  if ( v13 )
  {
    *v13 = 0LL;
    v13[1] = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = v14;
  v32 = v14;
  if ( v14 )
  {
    v16 = v9;
    v17 = 16 * v9;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)&v27, (__int64)this + v17 + 72);
    if ( (_DWORD)v28 == *((_DWORD *)this + 4 * v16 + 20) )
    {
      v18 = CAudioSignalProcessingModeArray::AddMultiple(
              (CAudioSignalProcessingModeArray *)&v27,
              *((_DWORD *)this + 4 * v16 + 376),
              *(const struct _GUID **)((char *)this + v17 + 1496));
      v19 = v18;
      if ( v18 >= 0 )
      {
        if ( (int)v28 <= 0 )
        {
LABEL_28:
          v15 = 0LL;
          *v35 = v14;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v27,
                                     v11);
            CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &rguid, v16, &v30, 0);
            v20 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                               0x30uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
            v21 = v20;
            *(_QWORD *)&v30.Data1 = v20;
            if ( v20 )
            {
              *(GUID *)v20 = rguid;
              *((_QWORD *)v20 + 2) = 0LL;
              *((_QWORD *)v20 + 3) = 0LL;
              *((_QWORD *)v20 + 4) = 0LL;
              *((_QWORD *)v20 + 5) = 0LL;
            }
            else
            {
              v21 = 0LL;
            }
            *(_QWORD *)&v30.Data1 = v21;
            if ( !v21 )
              break;
            *(_QWORD *)&v36 = v21;
            *((_QWORD *)&v36 + 1) = this;
            v37.m256i_i32[0] = v16;
            *(GUID *)((char *)v37.m256i_i64 + 4) = rguid;
            v37.m256i_i64[3] = a5;
            LOBYTE(v38) = a6;
            *((_QWORD *)&v38 + 1) = a7;
            v39 = a9;
            *(_OWORD *)v41 = v36;
            v42 = v37;
            v43 = v38;
            v44 = a9;
            *(GUID *)cchMax = rguid;
            v12 = CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___(
                    this,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v16,
                    (unsigned int)Size,
                    v33,
                    (struct _GUID *)cchMax,
                    (__int128 *)v41);
            if ( v12 < 0 )
              goto LABEL_35;
            if ( !*((_DWORD *)v21 + 6) )
            {
              pv = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                     *((_QWORD *)this + 2),
                     &pv) >= 0 )
              {
                *(_QWORD *)cchMax = 0LL;
                LODWORD(v25) = v16;
                if ( (int)StringCchPrintfExW(
                            pszDest,
                            0x400uLL,
                            &lpsz,
                            (unsigned __int64 *)cchMax,
                            0,
                            L"[%s], connector [%d] has no supported formats for mode - ",
                            pv,
                            v25) >= 0 )
                {
                  StringFromGUID2(&rguid, lpsz, cchMax[0]);
                  LogEPCProductionAssert(v22, pszDest);
                }
              }
              CoTaskMemFree(pv);
              *((_DWORD *)this + 47) = 1;
              v23 = *(_QWORD *)&v46.Data1 - *(_QWORD *)&rguid.Data1;
              if ( *(_QWORD *)&v46.Data1 == *(_QWORD *)&rguid.Data1 )
                v23 = *(_QWORD *)v46.Data4 - *(_QWORD *)rguid.Data4;
              if ( !v23 )
                *((_QWORD *)this + 20) = 0LL;
            }
            if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                                  v14,
                                  &v30) )
            {
              v12 = -2147024882;
LABEL_35:
              CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v21);
              goto LABEL_29;
            }
            if ( ++v11 >= (int)v28 )
              goto LABEL_28;
          }
          v12 = -2147024882;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          3906LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v18);
        v12 = v19;
      }
    }
    else
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        3905LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    v12 = -2147024882;
  }
LABEL_29:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v27);
  if ( v15 )
  {
    if ( *(_QWORD *)v15 )
    {
      free(*(void **)v15);
      *(_QWORD *)v15 = 0LL;
    }
    *(_QWORD *)(v15 + 8) = 0LL;
    operator delete((void *)v15, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v12;
}
