/*
 * XREFs of ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011A000
 * Callers:
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x180119EE8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x180004F80 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B60 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180038694 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006792C (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18011571C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180115AB8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int i; // esi
  LPVOID *v14; // rcx
  int j; // r14d
  void **v16; // rax
  int v17; // eax
  char v19; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h]
  __int64 v21; // [rsp+48h] [rbp-39h]
  struct _GUID v22; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+68h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  char *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v20 = -2LL;
  v21 = 0LL;
  if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0LL) )
  {
    v19 = 0;
    v25 = &v19;
    v26 = 1LL;
    TlgWrite(v3, &unk_180179F95, v4, v5, 3u, &pData);
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v23, 0LL, 0LL);
  if ( *((_QWORD *)this + 24) )
  {
    v22 = v23;
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v23, 0, &v22, 0);
    v7 = 0;
    v8 = *((_QWORD *)this + 24);
    if ( *(int *)(v8 + 8) > 0 )
    {
      v9 = *(_QWORD *)v23.Data4;
      v10 = *(_QWORD *)&v23.Data1;
      do
      {
        v11 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                          v8,
                          v7);
        v12 = (_QWORD *)*v11;
        if ( *(_QWORD *)*v11 == v10 && v12[1] == v9 )
        {
          for ( i = 0; i < *((_DWORD *)v12 + 6); ++i )
          {
            v14 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                (__int64)(v12 + 2),
                                i);
            if ( v14 )
              CConnectorFormatCharacteristics::`scalar deleting destructor'(v14);
          }
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v12 + 2));
          for ( j = 0; j < *((_DWORD *)v12 + 10); ++j )
          {
            v16 = (void **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)(v12 + 4),
                             j);
            operator delete(*v16, (const struct std::nothrow_t *)0x12);
          }
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v12 + 4));
        }
        ++v7;
        v8 = *((_QWORD *)this + 24);
      }
      while ( v7 < *(_DWORD *)(v8 + 8) );
    }
  }
  v17 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(this, v6);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1884,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17);
  return 0LL;
}
