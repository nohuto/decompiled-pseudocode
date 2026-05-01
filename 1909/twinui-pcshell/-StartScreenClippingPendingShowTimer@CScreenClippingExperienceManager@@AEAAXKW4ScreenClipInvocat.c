/*
 * XREFs of ?StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801D1F44
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801CD0E8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801CDD78 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall CScreenClippingExperienceManager::StartScreenClippingPendingShowTimer(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  const struct _TlgProvider_t *v5; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v7; // rcx
  struct _FILETIME v8; // rdx
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-21h] BYREF
  int v11; // [rsp+3Ch] [rbp-1Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  Context = 0LL;
  v9 = a2;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v9;
    v18 = &v11;
    v16 = 4;
    v11 = a3;
    v19 = 4;
    TlgWrite(v5, &unk_1804E88FD, 0LL, 0LL, 4u, &pData);
  }
  if ( !*(_QWORD *)(a1 + 440) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)CScreenClippingExperienceManager::ScreenClippingPendingShowTimerCallback,
                        (PVOID)a1,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 440),
      ThreadpoolTimer);
  }
  *(_BYTE *)(a1 + 432) = 1;
  v7 = *(struct _TP_TIMER **)(a1 + 440);
  v8 = (struct _FILETIME)(-10000LL * v9);
  *(_DWORD *)(a1 + 460) = a3;
  pftDueTime = v8;
  SetThreadpoolTimer(v7, &pftDueTime, 0, 0);
}
