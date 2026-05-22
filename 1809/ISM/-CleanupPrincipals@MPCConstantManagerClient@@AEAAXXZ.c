/*
 * XREFs of ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x1800E0ED8
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0C54 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManagerClient::CleanupPrincipals(MPCConstantManagerClient *this)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *j; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *k; // rdi
  __int64 *v11; // rdi
  __int64 *m; // rbx
  __int64 *n; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *ii; // rdi

  v1 = (__int64 *)*((_QWORD *)this + 6);
  for ( i = (__int64 *)*((_QWORD *)this + 5); i != v1 && *(_BYTE *)(*i + 184); ++i )
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
    if ( i != v1 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 6);
      if ( v1 != v7 )
      {
        do
        {
          v8 = *v1;
          *v1 = 0LL;
          v9 = *i;
          *i = v8;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          ++i;
          ++v1;
        }
        while ( v1 != v7 );
        v7 = (__int64 *)*((_QWORD *)this + 6);
      }
      for ( k = i; k != v7; ++k )
      {
        if ( *k )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*k + 8LL))(*k);
      }
      *((_QWORD *)this + 6) = i;
    }
  }
  v11 = (__int64 *)*((_QWORD *)this + 9);
  for ( m = (__int64 *)*((_QWORD *)this + 8); m != v11 && *(_BYTE *)(*m + 120); ++m )
    ;
  if ( m != v11 )
  {
    for ( n = m + 1; n != v11; ++n )
    {
      v14 = *n;
      if ( *(_BYTE *)(*n + 120) )
      {
        *n = 0LL;
        v15 = *m;
        *m = v14;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        ++m;
      }
    }
    if ( m != v11 )
    {
      v16 = (__int64 *)*((_QWORD *)this + 9);
      if ( v11 != v16 )
      {
        do
        {
          v17 = *v11;
          *v11 = 0LL;
          v18 = *m;
          *m = v17;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          ++m;
          ++v11;
        }
        while ( v11 != v16 );
        v16 = (__int64 *)*((_QWORD *)this + 9);
      }
      for ( ii = m; ii != v16; ++ii )
      {
        if ( *ii )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*ii + 8LL))(*ii);
      }
      *((_QWORD *)this + 9) = m;
    }
  }
}
