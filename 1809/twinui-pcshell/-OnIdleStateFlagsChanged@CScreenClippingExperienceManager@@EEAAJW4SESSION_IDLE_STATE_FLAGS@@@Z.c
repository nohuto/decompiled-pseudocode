/*
 * XREFs of ?OnIdleStateFlagsChanged@CScreenClippingExperienceManager@@EEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180180280
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?CloseExperienceIfRunning@CScreenClippingExperienceManager@@AEAAXXZ @ 0x18017D318 (-CloseExperienceIfRunning@CScreenClippingExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v13 = 0;
    v11 = &v8;
    v8 = a2;
    v12 = 4;
    TlgWrite(v4, &unk_180453555, 0LL, 0LL, 3u, &pData);
  }
  v5 = a2 & 2;
  if ( (v5 != 0) != *(_BYTE *)(a1 + 320) )
  {
    *(_BYTE *)(a1 + 320) = v5 != 0;
    if ( v5 )
      CScreenClippingExperienceManager::CloseExperienceIfRunning((CScreenClippingExperienceManager *)(a1 - 40));
  }
  return 0LL;
}
