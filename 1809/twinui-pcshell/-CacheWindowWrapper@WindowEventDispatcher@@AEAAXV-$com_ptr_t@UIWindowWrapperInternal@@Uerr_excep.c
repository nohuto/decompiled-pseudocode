/*
 * XREFs of ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180020654
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001A0E0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18022A470 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007A244 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowEventDispatcher::CacheWindowWrapper(__int64 a1, _QWORD *a2, _QWORD *a3, const char *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  const WCHAR *v13; // r14
  __int64 v14; // r10
  std::_Ref_count_base *v15; // rcx
  LPVOID Context; // [rsp+30h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-71h] BYREF
  int v18; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int128 v19; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h]
  _QWORD *v22; // [rsp+68h] [rbp-41h]
  _QWORD *v23; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  void *v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+9Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-9h] BYREF
  int *v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+BCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v21 = -2LL;
  v22 = a2;
  v23 = a3;
  v7 = *a3;
  if ( !*a3 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x9E1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      a4);
    __debugbreak();
  }
  v8 = *a2;
  v19 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v7 = *a3;
    v9 = a3[1];
  }
  *(_QWORD *)&v19 = v7;
  *((_QWORD *)&v19 + 1) = v9;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v8 + 288LL))(v8, &v19, (unsigned int)a4);
  v10 = *(_QWORD **)(a1 + 368);
  if ( *(_QWORD **)(a1 + 376) == v10 )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
      a1 + 360,
      v10,
      a2);
  }
  else
  {
    v11 = *a2;
    *v10 = *a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *(_QWORD *)(a1 + 368) += 8LL;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 272LL))(*a2);
  v13 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 256LL))(*a2);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, v13);
    v18 = v12;
    v29 = &v18;
    v30 = 4;
    v31 = 0;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045BF3A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v14 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v25 = &unk_18045BF45;
    v26 = 62;
    v27 = 1;
    EventWriteTransfer(*(_QWORD *)(v14 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v15 = (std::_Ref_count_base *)a3[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
}
