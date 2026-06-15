/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800EEF54
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800EF120 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x1800DAB64 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800EF140 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  CVADServer **i; // rcx
  CPdcTimerActivation **v11; // r10
  int v12; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  int v15[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v16; // [rsp+50h] [rbp+Fh]
  char *v17; // [rsp+58h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v19; // [rsp+80h] [rbp+3Fh]
  int v20; // [rsp+88h] [rbp+47h]
  int v21; // [rsp+8Ch] [rbp+4Bh]

  v16 = -2LL;
  v4 = (CPdcActivationClient *)((char *)this + 32);
  v17 = (char *)this + 32;
  v5 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    *(_QWORD *)v15 = a2;
    v19 = v15;
    v20 = 8;
    v21 = 0;
    TlgWrite(v9, &unk_180174ADE, v6, v7, 3u, &pData);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
  {
    CVADServer::QueryState(*i, v15, &fPending, (int *)&Context);
    if ( fPending )
    {
      if ( !(_DWORD)Context )
        goto LABEL_19;
    }
    else if ( !v15[0] )
    {
      goto LABEL_19;
    }
    if ( *v11 )
      CPdcTimerActivation::Renew(*v11);
  }
LABEL_19:
  v12 = _Mtx_unlock(v4);
  if ( v12 )
    std::_Throw_C_error(v12);
}
