/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000A920
 * Callers:
 *     ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000A260 (-OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18005287C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMessageProxy> const &>(
        char **a1,
        char *a2,
        char **a3)
{
  char *v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  size_t v13; // rcx
  unsigned __int64 v14; // rdx
  char *v15; // r15
  __int64 v16; // r13
  char **v17; // rbx
  char *v18; // rcx
  char *v19; // r8
  char *v20; // rax
  signed __int64 v21; // r9
  char *v22; // rbx
  char *v23; // r14
  __int64 v24; // rcx
  const struct std::nothrow_t *v25; // rdx
  size_t v27; // rcx
  void *v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  _QWORD *v34; // [rsp+30h] [rbp-48h]
  unsigned __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  void *v36; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v9 = v7 + 1;
  v32 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v12 = v7 + 1;
    goto LABEL_5;
  }
  v12 = v11 + v10;
  if ( v11 + v10 >= v9 )
    goto LABEL_5;
  while ( 1 )
  {
    v12 = v9;
LABEL_5:
    v37 = v12;
    v13 = 8 * v12;
    v33 = 8 * v12;
    v14 = 8 * v12;
    if ( v12 <= v8 )
      break;
    v14 = -1LL;
LABEL_31:
    v27 = v14 + 39;
    if ( v14 + 39 < v14 )
      v27 = -1LL;
    v28 = operator new(v27);
    if ( v28 )
    {
      v15 = (char *)(((unsigned __int64)v28 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v15 - 1) = v28;
      goto LABEL_49;
    }
    _o__invalid_parameter_noinfo_noreturn(v29);
  }
  if ( v13 >= 0x1000 )
    goto LABEL_31;
  if ( v13 )
    v15 = (char *)operator new(v13);
  else
    v15 = 0LL;
LABEL_49:
  try
  {
    v35 = (unsigned __int64)v15;
    v16 = 8 * v6;
    v17 = (char **)&v15[8 * v6];
    v34 = v17 + 1;
    v18 = *a3;
    *v17 = *a3;
    if ( v18 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
    v36 = v17;
    v19 = a1[1];
    if ( v4 == v19 )
    {
      v20 = *a1;
      if ( *a1 != v19 )
      {
        v21 = v15 - v20;
        do
        {
          *(_QWORD *)&v20[v21] = 0LL;
          if ( &v20[v21] != v20 )
          {
            v18 = *(char **)v20;
            *(_QWORD *)&v20[v21] = *(_QWORD *)v20;
            *(_QWORD *)v20 = 0LL;
          }
          v20 += 8;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      v18 = *a1;
      if ( *a1 != v4 )
      {
        v30 = v15 - v18;
        do
        {
          *(_QWORD *)&v18[v30] = 0LL;
          if ( &v18[v30] != v18 )
          {
            *(_QWORD *)&v18[v30] = *(_QWORD *)v18;
            *(_QWORD *)v18 = 0LL;
          }
          v18 += 8;
        }
        while ( v18 != v4 );
        v19 = a1[1];
      }
      v36 = v15;
      if ( v4 != v19 )
      {
        v31 = v15 - v4 + v16 + 8;
        do
        {
          v18 = &v4[v31];
          *(_QWORD *)&v4[v31] = 0LL;
          if ( &v4[v31] != v4 )
          {
            *(_QWORD *)v18 = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v19 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(v18, v36, v34);
    std::_Deallocate<16,0>((void *)v35, (const struct std::nothrow_t *)(8 * v37));
    throw;
  }
  v22 = *a1;
  if ( *a1 )
  {
    v23 = a1[1];
    if ( v22 != v23 )
    {
      do
      {
        v24 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v22 += 8;
      }
      while ( v22 != v23 );
      v22 = *a1;
    }
    v25 = (const struct std::nothrow_t *)((a1[2] - v22) & 0xFFFFFFFFFFFFFFF8uLL);
    v35 = (unsigned __int64)v25;
    v36 = v22;
    if ( (unsigned __int64)v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v36, &v35);
      v25 = (const struct std::nothrow_t *)v35;
      v22 = (char *)v36;
    }
    operator delete(v22, v25);
  }
  *a1 = v15;
  a1[1] = &v15[8 * v32];
  a1[2] = &v15[v33];
  return (__int64)&(*a1)[v16];
}
