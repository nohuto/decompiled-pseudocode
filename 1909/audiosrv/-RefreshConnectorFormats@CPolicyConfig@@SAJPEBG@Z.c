/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800DFCF4
 * Callers:
 *     _lambda_45ca10f83369d44ceedcca5d39762dce_::operator() @ 0x1800EB454 (_lambda_45ca10f83369d44ceedcca5d39762dce_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x1801199E8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(LPCWSTR pwsz)
{
  int refreshed; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  void *v6; // r8
  LPCGUID v7; // r8
  TraceLoggingHProvider v8; // r9
  CEndpointCharacteristics *v10; // [rsp+38h] [rbp-9h] BYREF
  int v11; // [rsp+40h] [rbp-1h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp+3h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+7h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v14[1] = -2LL;
  v14[0] = 0LL;
  v10 = 0LL;
  refreshed = (*(__int64 (__fastcall **)(PVOID, LPCWSTR, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                pwsz,
                0LL,
                0LL,
                &v10);
  v3 = refreshed;
  if ( refreshed >= 0 )
  {
    v5 = *((_QWORD *)v10 + 2);
    v14[0] = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    refreshed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v11);
    v3 = refreshed;
    if ( refreshed >= 0 )
    {
      if ( v11 == 4 )
        goto LABEL_14;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v6);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgWrite(v8, &unk_180177225, v7, (LPCGUID)v8, 3u, &pData);
      }
      refreshed = CEndpointCharacteristics::RefreshConnectorFormats(v10);
      v3 = refreshed;
      if ( refreshed >= 0 )
      {
LABEL_14:
        v3 = 0;
        goto LABEL_15;
      }
      v4 = 2385LL;
    }
    else
    {
      v4 = 2377LL;
    }
  }
  else
  {
    v4 = 2371LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)refreshed);
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
  return v3;
}
