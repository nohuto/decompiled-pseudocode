/*
 * XREFs of ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18001D848
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180018C20 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18029E770 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007CCEC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowEventDispatcher::CacheWindowWrapper(__int64 a1, __int64 **a2, _QWORD *a3, const char *a4)
{
  unsigned int v4; // r10d
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 **v11; // rdx
  __int64 *v12; // rcx
  int v13; // esi
  const WCHAR *v14; // r14
  std::_Ref_count_base *v15; // rcx
  TraceLoggingHProvider v16; // r10
  LPVOID Context; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  int v19; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int128 v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 **v22; // [rsp+58h] [rbp-41h]
  _QWORD *v23; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  int *v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v21 = -2LL;
  v4 = (unsigned int)a4;
  v22 = a2;
  v23 = a3;
  if ( !*a3 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0xA71,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      a4);
    __debugbreak();
  }
  v8 = *a2;
  v9 = **a2;
  v20 = 0LL;
  v10 = a3[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a3[1];
  }
  *(_QWORD *)&v20 = *a3;
  *((_QWORD *)&v20 + 1) = v10;
  (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v9 + 304))(v8, &v20, v4);
  v11 = *(__int64 ***)(a1 + 360);
  if ( *(__int64 ***)(a1 + 368) == v11 )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
      a1 + 352,
      v11,
      a2);
  }
  else
  {
    v12 = *a2;
    *v11 = *a2;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    *(_QWORD *)(a1 + 360) += 8LL;
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *))(**a2 + 288))(*a2);
  v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64 *))(**a2 + 272))(*a2);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, v14);
    v19 = v13;
    v26 = &v19;
    v27 = 4;
    v28 = 0;
    TlgWrite(v16, &unk_1804F72D0, 0LL, 0LL, 4u, &pData);
  }
  if ( *a2 )
    (*(void (__fastcall **)(__int64 *))(**a2 + 16))(*a2);
  v15 = (std::_Ref_count_base *)a3[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
}
