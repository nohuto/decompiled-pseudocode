/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C
 * Callers:
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800348C0 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        LPCWSTR *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  void *v4; // r8
  __int64 cData; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // r15d
  int HasHardwareAudioEngine; // r12d
  __int64 v11; // r8
  int DeviceFormat; // ebx
  _QWORD *v13; // rdi
  struct tWAVEFORMATEX *v14; // rcx
  struct tWAVEFORMATEX *v15; // rsi
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // [rsp+3Ch] [rbp-65h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-61h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-59h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-51h]
  struct tWAVEFORMATEX *v25; // [rsp+58h] [rbp-49h] BYREF
  char v26; // [rsp+60h] [rbp-41h]
  __int64 v27; // [rsp+68h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-9h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v30; // [rsp+A8h] [rbp+7h]
  __int64 v31; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v27 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v4);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, this[3]);
    v21 = a2;
    v30 = &v21;
    v31 = cData;
    TlgWrite(v8, &unk_180172F6F, v6, v7, cData, &pData);
  }
  v9 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v9 = eHostProcessConnector;
  HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine((CEndpointCharacteristics *)this);
  pv = 0LL;
  LOBYTE(v11) = HasHardwareAudioEngine != 0;
  p_pv = &pv;
  v25 = 0LL;
  v26 = 1;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat((CEndpointCharacteristics *)this, 0LL, v11, v9, &v25);
  if ( v26 )
  {
    v13 = p_pv;
    v14 = (struct tWAVEFORMATEX *)*p_pv;
    v15 = v25;
    if ( v25 != *p_pv )
    {
      if ( v14 )
        CoTaskMemFree(v14);
      *v13 = v15;
    }
  }
  if ( DeviceFormat < 0 )
  {
    v16 = (unsigned int)DeviceFormat;
    v17 = 3325LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v16);
    goto LABEL_19;
  }
  v18 = CPolicyConfig::SetDeviceFormatInternal(
          (struct CEndpointCharacteristics *)this,
          HasHardwareAudioEngine,
          v9,
          (const struct tWAVEFORMATEX *)pv,
          (const struct tWAVEFORMATEX *)pv,
          0LL);
  DeviceFormat = v18;
  if ( v18 < 0 )
  {
    v16 = (unsigned int)v18;
    v17 = 3328LL;
    goto LABEL_17;
  }
  DeviceFormat = 0;
LABEL_19:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)DeviceFormat;
}
