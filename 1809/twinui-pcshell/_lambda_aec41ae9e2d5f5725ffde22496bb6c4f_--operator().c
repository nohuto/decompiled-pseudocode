/*
 * XREFs of _lambda_aec41ae9e2d5f5725ffde22496bb6c4f_::operator() @ 0x18017CC04
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_aec41ae9e2d5f5725ffde22496bb6c4f__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180183610 (wistd--_Func_impl_wistd--_Callable_obj__lambda_aec41ae9e2d5f5725ffde22496bb6c4f__0__ea_180183610.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     CreationThreadDispatcher::RunAsync__lambda_210ce7fccd7f8ade7715f981383c208f___ @ 0x18017C2F4 (CreationThreadDispatcher--RunAsync__lambda_210ce7fccd7f8ade7715f981383c208f___.c)
 */

__int64 __fastcall lambda_aec41ae9e2d5f5725ffde22496bb6c4f_::operator()(volatile int **a1, int a2)
{
  TraceLoggingHProvider v4; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v7; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+27h] BYREF
  int *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]

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
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, L"PrintScreenKeyForSnippingEnabled");
    v13 = 0;
    v11 = &v7;
    v7 = a2;
    v12 = 4;
    TlgWrite(v4, &unk_180452712, 0LL, 0LL, 4u, &pData);
  }
  return CreationThreadDispatcher::RunAsync__lambda_210ce7fccd7f8ade7715f981383c208f___(*((_QWORD *)*a1 + 50), *a1);
}
