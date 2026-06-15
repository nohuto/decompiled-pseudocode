/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3C20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800CF3C0 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  int v4; // ebx
  void *v5; // r8
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  int v9; // eax
  __int64 v10; // rax
  _QWORD *Ptr; // r14
  __int64 v12; // rsi
  void *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  CPolicyConfig *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  void *v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rsi
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28[3]; // [rsp+38h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-1h] BYREF
  char v31; // [rsp+68h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( a2 )
  {
    v28[1] = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, (LPVOID *)&v28[1])
      && fPending[0] )
    {
      v28[1] = (__int64)qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    if ( **(_DWORD **)(v28[1] + 8) > 4u )
    {
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v8, &unk_180172F0F, v6, v7, 3u, &pData);
    }
    v28[0] = 0LL;
    v9 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                               + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           0LL,
           0LL,
           v28);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        3988LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v9);
LABEL_40:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v28);
      return (unsigned int)v4;
    }
    *(GUID *)&v28[1] = GUID_00000000_0000_0000_0000_000000000000;
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      (CEndpointCharacteristics *)v28[0],
      eHostProcessConnector,
      (struct _GUID *)&v28[1],
      0LL,
      0LL);
    pv = 0LL;
    *(_QWORD *)&pData.Size = 0LL;
    pData.Ptr = (ULONGLONG)&pv;
    v10 = *(_QWORD *)this;
    v31 = 1;
    v4 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, ULONG *))(v10 + 32))(
           this,
           a2,
           0LL,
           &pData.Size);
    if ( v31 )
    {
      Ptr = (_QWORD *)pData.Ptr;
      v12 = *(_QWORD *)&pData.Size;
      v13 = *(void **)pData.Ptr;
      if ( *(_QWORD *)&pData.Size != *(_QWORD *)pData.Ptr )
      {
        if ( v13 )
          CoTaskMemFree(v13);
        *Ptr = v12;
      }
    }
    if ( v4 < 0 )
    {
      v14 = (unsigned int)v4;
      v15 = 3995LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v14);
      goto LABEL_38;
    }
    v16 = CPolicyConfig::ConfirmDeviceFormat(
            (struct CEndpointCharacteristics *)v28[0],
            (const struct tWAVEFORMATEX *)pv,
            (struct _GUID *)&v28[1],
            0,
            0);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF9E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v16);
      v18 = CPolicyConfig::SetDeviceFormatCommon(v17, a2, 0LL, 0LL);
      v4 = v18;
      if ( v18 < 0 )
      {
        v15 = 4002LL;
LABEL_22:
        v14 = (unsigned int)v18;
        goto LABEL_23;
      }
      v18 = CEndpointCharacteristics::ClearMixFormatCache(v28[0], 0LL);
      v4 = v18;
      if ( v18 < 0 )
      {
        v15 = 4005LL;
        goto LABEL_22;
      }
      *(_QWORD *)fPending = 0LL;
      *(_QWORD *)&pData.Size = 0LL;
      pData.Ptr = (ULONGLONG)fPending;
      v19 = *(_QWORD *)this;
      v31 = 1;
      v4 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, ULONG *))(v19 + 32))(
             this,
             a2,
             1LL,
             &pData.Size);
      if ( v31 )
      {
        v21 = (_QWORD *)pData.Ptr;
        v22 = *(_QWORD *)&pData.Size;
        v20 = *(void **)pData.Ptr;
        if ( *(_QWORD *)&pData.Size != *(_QWORD *)pData.Ptr )
        {
          if ( v20 )
            CoTaskMemFree(v20);
          *v21 = v22;
        }
      }
      if ( v4 < 0 )
      {
        v23 = (unsigned int)v4;
        v24 = 4009LL;
        goto LABEL_33;
      }
      v25 = CPolicyConfig::SetDeviceFormatCommon(
              (CPolicyConfig *)v20,
              a2,
              *(const struct tWAVEFORMATEX **)fPending,
              0LL);
      v4 = v25;
      if ( v25 < 0 )
      {
        v23 = (unsigned int)v25;
        v24 = 4012LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v24,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v23);
        if ( *(_QWORD *)fPending )
          CoTaskMemFree(*(LPVOID *)fPending);
        goto LABEL_38;
      }
      if ( *(_QWORD *)fPending )
        CoTaskMemFree(*(LPVOID *)fPending);
    }
    v4 = 0;
LABEL_38:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_40;
  }
  v4 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    3980LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80004003LL);
  return (unsigned int)v4;
}
