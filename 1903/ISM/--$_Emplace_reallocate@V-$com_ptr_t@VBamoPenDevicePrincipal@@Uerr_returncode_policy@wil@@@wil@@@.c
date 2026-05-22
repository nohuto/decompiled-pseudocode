/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180126B34
 * Callers:
 *     ??$emplace@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180127334 (--$emplace@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1801216C4 (-_Change_array@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  _QWORD *v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  char *v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r8
  __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 result; // rax
  void *v26; // [rsp+20h] [rbp-38h]
  __int64 *v27; // [rsp+60h] [rbp+8h]
  __int64 *v28; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v26 = v13;
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v28 = (_QWORD *)((char *)v13 + v14 + 8);
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)((char *)v13 + v14) = v15;
    v27 = (_QWORD *)((char *)v13 + v14);
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = (char *)v13 - v17;
        do
        {
          v19 = *(_QWORD *)v17;
          *(_QWORD *)v17 = 0LL;
          *(_QWORD *)&v17[v18] = v19;
          v17 += 8;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v20 = (char *)v13 - v17;
        do
        {
          v21 = *(_QWORD *)v17;
          *(_QWORD *)v17 = 0LL;
          *(_QWORD *)&v17[v20] = v21;
          v17 += 8;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v27 = v13;
      if ( v4 != v16 )
      {
        v22 = (char *)v13 + v14 - (_QWORD)v4;
        do
        {
          v23 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)&v4[(_QWORD)v22 + 8] = v23;
          v4 += 8;
        }
        while ( v4 != v16 );
      }
    }
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Change_array(
      (__int64)a1,
      (__int64)v13,
      v8,
      v11);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Destroy(v24, v27, v28);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
