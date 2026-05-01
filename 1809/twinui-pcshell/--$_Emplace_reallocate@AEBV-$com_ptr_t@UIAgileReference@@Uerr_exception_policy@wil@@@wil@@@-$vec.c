/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800E9B70
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1800899AC (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 *     ?AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BA120 (-AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Interna.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800F64B4 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  char *v13; // r14
  __int64 v14; // r8
  __int64 *v15; // r15
  __int64 v16; // rcx
  char *v17; // rdx
  char *v18; // rcx
  signed __int64 v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+80h] [rbp+8h]
  __int64 *v27; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v26 = 8 * v6;
  v15 = (__int64 *)&v13[8 * v6];
  v25 = v15 + 1;
  try
  {
    v16 = *a3;
    *v15 = *a3;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v14 = v26;
    }
    v27 = v15;
    v17 = a1[1];
    v18 = *a1;
    if ( v4 == v17 )
    {
      if ( v18 != v17 )
      {
        v19 = v13 - v18;
        do
        {
          v20 = *(_QWORD *)v18;
          *(_QWORD *)v18 = 0LL;
          *(_QWORD *)&v18[v19] = v20;
          v18 += 8;
        }
        while ( v18 != v17 );
      }
    }
    else
    {
      if ( v18 != v4 )
      {
        v21 = v13 - v18;
        do
        {
          v22 = *(_QWORD *)v18;
          *(_QWORD *)v18 = 0LL;
          *(_QWORD *)&v18[v21] = v22;
          v18 += 8;
        }
        while ( v18 != v4 );
        v17 = a1[1];
      }
      v27 = (__int64 *)v13;
      if ( v4 != v17 )
      {
        v18 = &v13[v14 - (_QWORD)v4];
        do
        {
          v23 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)&v18[(_QWORD)v4 + 8] = v23;
          v4 += 8;
        }
        while ( v4 != v17 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy((__int64)v18, v27, v25);
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(
    a1,
    v13,
    v8,
    v11,
    v25,
    v13,
    -2LL);
  return (__int64)&(*a1)[v26];
}
