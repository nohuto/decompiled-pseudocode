/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x18000A0E8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180027338 (--$_Emplace_reallocate@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICo.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(
        ContextualProcessorManager *this,
        struct IContextualProcessor *a2)
{
  char *v3; // rbx
  __int64 *v4; // rdx
  const WCHAR *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  TraceLoggingHProvider v9; // r10
  __int64 v10[2]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  v10[1] = -2LL;
  v3 = (char *)this + 16;
  v10[0] = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10);
  v4 = (__int64 *)*((_QWORD *)v3 + 1);
  if ( *((__int64 **)v3 + 2) == v4 )
  {
    std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IContextualProcessor>>(
      v3,
      v4,
      v10);
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != v10 )
    {
      *v4 = (__int64)a2;
      v10[0] = 0LL;
    }
    *((_QWORD *)v3 + 1) += 8LL;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v10);
  v5 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)a2 + 48LL))(a2);
  v7 = wil::details::static_lazy<InputETW>::get(v6, lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 1uLL) )
  {
    TlgCreateWsz(&pDesc, v5);
    TlgWrite(v9, &unk_1801A02C4, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
