/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800FA6BC
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800FA870 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x1800E5DA8 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800FA890 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  int v4; // eax
  const GUID *v5; // r8
  const GUID *v6; // r9
  void *v7; // r8
  const struct _TlgProvider_t *v8; // rcx
  CVADServer **i; // rcx
  CPdcTimerActivation **v10; // r10
  int v11; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  int v14[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v15; // [rsp+50h] [rbp+Fh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+17h] BYREF
  int *v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+84h] [rbp+43h]

  v15 = -2LL;
  v4 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 4u )
  {
    *(_QWORD *)v14 = a2;
    v17 = v14;
    v18 = 8;
    v19 = 0;
    TlgWrite(v8, &unk_180178A96, v5, v6, 3u, &pData);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
  {
    CVADServer::QueryState(*i, v14, &fPending, (int *)&Context);
    if ( fPending )
    {
      if ( !(_DWORD)Context )
        goto LABEL_19;
    }
    else if ( !v14[0] )
    {
      goto LABEL_19;
    }
    if ( *v10 )
      CPdcTimerActivation::Renew(*v10);
  }
LABEL_19:
  v11 = _Mtx_unlock((CPdcActivationClient *)((char *)this + 32));
  if ( v11 )
    std::_Throw_C_error(v11);
}
