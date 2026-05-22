/*
 * XREFs of ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x18011B6B4
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011BB0C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011BDC0 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x18011C2AC (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180122108 (-erase@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 */

void __fastcall MPCConstantManagerClient::CleanupPrincipals(MPCConstantManagerClient *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 *k; // rbx
  __int64 *m; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 *n; // rbx
  __int64 *ii; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 7);
  for ( i = (__int64 *)*((_QWORD *)this + 6); i != v1 && *(_BYTE *)(*i + 184); ++i )
    ;
  if ( i != v1 )
  {
    for ( j = i + 1; j != v1; ++j )
    {
      v5 = *j;
      if ( *(_BYTE *)(*j + 184) )
      {
        *j = 0LL;
        v6 = *i;
        *i = v5;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        ++i;
      }
    }
  }
  std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::erase((char *)this + 48, &v17, i, v1);
  v7 = (__int64 *)*((_QWORD *)this + 10);
  for ( k = (__int64 *)*((_QWORD *)this + 9); k != v7 && *(_BYTE *)(*k + 120); ++k )
    ;
  if ( k != v7 )
  {
    for ( m = k + 1; m != v7; ++m )
    {
      v10 = *m;
      if ( *(_BYTE *)(*m + 120) )
      {
        *m = 0LL;
        v11 = *k;
        *k = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        ++k;
      }
    }
  }
  std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::erase((char *)this + 72, &v17, k, v7);
  v12 = (__int64 *)*((_QWORD *)this + 13);
  for ( n = (__int64 *)*((_QWORD *)this + 12); n != v12 && *(_BYTE *)(*n + 184); ++n )
    ;
  if ( n != v12 )
  {
    for ( ii = n + 1; ii != v12; ++ii )
    {
      v15 = *ii;
      if ( *(_BYTE *)(*ii + 184) )
      {
        *ii = 0LL;
        v16 = *n;
        *n = v15;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        ++n;
      }
    }
  }
  std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::erase((char *)this + 96, &v17, n, v12);
}
