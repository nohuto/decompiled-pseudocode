/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800596DC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059644 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x180004F80 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180038694 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x180055F2C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180059878 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180061D3C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  int v5; // r15d
  int i; // r12d
  int v7; // eax
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // esi
  int v16; // r12d
  int j; // r15d
  int v18; // eax
  bool v19; // zf
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-29h] BYREF
  int v24; // [rsp+40h] [rbp-21h]
  int v25; // [rsp+44h] [rbp-1Dh]
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  int v29; // [rsp+60h] [rbp-1h]
  int v30; // [rsp+64h] [rbp+3h]
  struct _GUID v31; // [rsp+68h] [rbp+7h] BYREF
  __int64 v32; // [rsp+78h] [rbp+17h]
  struct _GUID v33; // [rsp+80h] [rbp+1Fh] BYREF

  v32 = -2LL;
  v2 = 0LL;
  v26 = 0LL;
  v3 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  if ( !*((_DWORD *)this + 46) )
  {
LABEL_2:
    v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v27);
    if ( v4 >= 0 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v28, (char *)this + 72);
      if ( v29 == *((_DWORD *)this + 20) )
      {
        v4 = CAudioSignalProcessingModeArray::AddMultiple(
               (CAudioSignalProcessingModeArray *)&v28,
               *((_DWORD *)this + 376),
               *((const struct _GUID **)this + 187));
        if ( v4 >= 0 )
        {
          v5 = 0;
          v3 = v27;
          if ( v29 <= 0 )
          {
LABEL_14:
            v12 = v2;
            v2 = 0LL;
            *((_QWORD *)this + 25) = v12;
            v13 = v3;
            v3 = 0LL;
            *((_QWORD *)this + 24) = v13;
          }
          else
          {
            while ( 1 )
            {
              v31 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v28,
                                       v5);
              CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v33, 0, &v31, 0);
              for ( i = 0; ; ++i )
              {
                v7 = *(_DWORD *)(v3 + 8);
                v8 = i == v7;
                if ( i >= v7 )
                  break;
                v9 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                 v3,
                                 i);
                v10 = (_QWORD *)*v9;
                v11 = *(_QWORD *)*v9 - *(_QWORD *)&v33.Data1;
                if ( !v11 )
                  v11 = v10[1] - *(_QWORD *)v33.Data4;
                if ( !v11 )
                {
                  v8 = i == *(_DWORD *)(v3 + 8);
                  break;
                }
              }
              if ( v8 )
                break;
              if ( ++v5 >= v29 )
                goto LABEL_14;
            }
            v4 = -2147023728;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    v3 = v27;
    goto LABEL_15;
  }
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v26);
  if ( v4 < 0 )
  {
LABEL_22:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v23);
    v2 = v26;
    goto LABEL_15;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v23, (char *)this + 120);
  if ( v24 != *((_DWORD *)this + 32) )
  {
    v4 = -2147024882;
    goto LABEL_22;
  }
  v4 = CAudioSignalProcessingModeArray::AddMultiple(
         (CAudioSignalProcessingModeArray *)&v23,
         *((_DWORD *)this + 388),
         *((const struct _GUID **)this + 193));
  if ( v4 < 0 )
    goto LABEL_22;
  v15 = 0;
  v2 = v26;
  v16 = v24;
  if ( v24 <= 0 )
  {
LABEL_34:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v23);
    goto LABEL_2;
  }
  while ( 1 )
  {
    v31 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v23, v15);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v33, 3, &v31, 0);
    for ( j = 0; ; ++j )
    {
      v18 = *(_DWORD *)(v2 + 8);
      v19 = j == v18;
      if ( j >= v18 )
        break;
      v20 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                        v2,
                        j);
      v21 = (_QWORD *)*v20;
      v22 = *(_QWORD *)*v20 - *(_QWORD *)&v33.Data1;
      if ( !v22 )
        v22 = v21[1] - *(_QWORD *)v33.Data4;
      if ( !v22 )
      {
        v19 = j == *(_DWORD *)(v2 + 8);
        break;
      }
    }
    if ( v19 )
      break;
    if ( ++v15 >= v16 )
      goto LABEL_34;
  }
  v4 = -2147023728;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v23);
LABEL_15:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v28);
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    operator delete((void *)v3, (const struct std::nothrow_t *)0x10);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    operator delete((void *)v2, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v4;
}
