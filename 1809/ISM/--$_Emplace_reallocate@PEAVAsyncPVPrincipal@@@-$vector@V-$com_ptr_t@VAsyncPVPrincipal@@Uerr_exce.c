/*
 * XREFs of ??$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@?$vector@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncPVPrincipal@@@Z @ 0x1800E1BE8
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0C54 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncPVPrincipal *>(
        char **a1,
        char *a2,
        void (__fastcall ****a3)(_QWORD))
{
  char *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // r12
  char *v19; // r14
  void (__fastcall ***v20)(_QWORD); // rcx
  char *v21; // rdx
  char *v22; // rcx
  signed __int64 v23; // r8
  __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rbx
  char *v29; // r14
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-58h]
  char *v33; // [rsp+88h] [rbp+10h]
  __int64 v34; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v34 = v11;
  v32 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (char *)operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_43;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = 8 * v6;
  v19 = &v17[8 * v6];
  try
  {
    v20 = *a3;
    *(_QWORD *)v19 = *a3;
    if ( v20 )
      (**v20)(v20);
    v33 = v19;
    v21 = a1[1];
    v22 = *a1;
    if ( v4 == v21 )
    {
      if ( v22 != v21 )
      {
        v23 = v17 - v22;
        do
        {
          v24 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          *(_QWORD *)&v22[v23] = v24;
          v22 += 8;
        }
        while ( v22 != v21 );
      }
    }
    else
    {
      if ( v22 != v4 )
      {
        v25 = v17 - v22;
        do
        {
          v26 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          *(_QWORD *)&v22[v25] = v26;
          v22 += 8;
        }
        while ( v22 != v4 );
        v21 = a1[1];
      }
      v33 = v17;
      if ( v4 != v21 )
      {
        v22 = &v17[v18 - (_QWORD)v4];
        do
        {
          v27 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)&v4[(_QWORD)v22 + 8] = v27;
          v4 += 8;
        }
        while ( v4 != v21 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::_Destroy(
      (__int64)v22,
      v33,
      (_QWORD *)v19 + 1);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v31,
      v17,
      v34);
    throw;
  }
  v28 = *a1;
  if ( *a1 )
  {
    v29 = a1[1];
    if ( v28 != v29 )
    {
      do
      {
        if ( *(_QWORD *)v28 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 8LL))(*(_QWORD *)v28);
        v28 += 8;
      }
      while ( v28 != v29 );
      v28 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v28) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_41;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v28 - 1);
    if ( (unsigned __int64)&v28[-v16 - 8] <= 0x1F )
    {
      v28 = (char *)*((_QWORD *)v28 - 1);
LABEL_41:
      operator delete(v28, v15);
      goto LABEL_42;
    }
LABEL_43:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_42:
  *a1 = v17;
  a1[1] = &v17[8 * v8];
  a1[2] = &v17[v32];
  return (__int64)&(*a1)[v18];
}
