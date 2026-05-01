/*
 * XREFs of ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180267608
 * Callers:
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1802742B0 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x18027D4B0 (-FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
        __int64 a1,
        const WCHAR **a2)
{
  TLG_STATUS result; // eax
  const WCHAR *v5; // rdx
  TraceLoggingHProvider v6; // r10
  WINBOOL v7; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v8; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = (_DWORD **)qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  result = (int)v8;
  if ( *v8[1] > 5u )
  {
    v12 = 0;
    v5 = *a2;
    v10 = a1;
    v11 = 8;
    TlgCreateWsz(&pDesc, v5);
    return TlgWrite(v6, &unk_1804D000A, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
