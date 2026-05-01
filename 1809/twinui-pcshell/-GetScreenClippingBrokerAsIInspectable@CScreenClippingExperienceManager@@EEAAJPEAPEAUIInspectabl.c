/*
 * XREFs of ?GetScreenClippingBrokerAsIInspectable@CScreenClippingExperienceManager@@EEAAJPEAPEAUIInspectable@@@Z @ 0x18017DDA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017D70C (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::GetScreenClippingBrokerAsIInspectable(
        CScreenClippingExperienceManager *this,
        struct IInspectable **a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  const struct _TlgProvider_t *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

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
    TlgWrite(v4, &unk_180453742, 0LL, 0LL, 2u, &pData);
  v5 = CScreenClippingExperienceManager::EnsureScreenClippingBroker(this);
  if ( v5 < 0 )
  {
    v6 = 438LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInspectable **))this + 46))(
         *((_QWORD *)this + 46),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a2);
  if ( v5 < 0 )
  {
    v6 = 439LL;
    goto LABEL_8;
  }
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
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
    TlgWrite(v8, &unk_180453799, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
