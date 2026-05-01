/*
 * XREFs of ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180241644
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator() @ 0x18002DB34 (_lambda_d38fe7d7cbebf305295b5d6636e8a4b7_--operator().c)
 *     _lambda_6061614c749b16812af3d2bf0deac9fc_::operator() @ 0x1800668C4 (_lambda_6061614c749b16812af3d2bf0deac9fc_--operator().c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18023E050 (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802425AC (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewManagerInteropTraceLogging::Create(ViewManagerInteropTraceLogging *this)
{
  __int64 v2; // rax
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v4[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(ViewManagerInteropTraceLogging *))(v2 + 8))(this);
}
