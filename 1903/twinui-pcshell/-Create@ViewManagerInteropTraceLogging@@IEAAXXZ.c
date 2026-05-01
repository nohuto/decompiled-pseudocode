/*
 * XREFs of ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180297714
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180033E18 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x180047834 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 *     _lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator() @ 0x180048EF4 (_lambda_1e50dd1581e01d6b2d5aa75be8ea3966_--operator().c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18029424C (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18029866C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewManagerInteropTraceLogging::Create(ViewManagerInteropTraceLogging *this)
{
  __int64 v2; // rax
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v4[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(ViewManagerInteropTraceLogging *))(v2 + 8))(this);
}
