/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x180032770
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18008F19C (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 *v9; // r14
  char *result; // rax
  size_t v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // r8
  __int64 v15; // rax
  __int64 *v16; // r12
  _QWORD *v17; // [rsp+60h] [rbp+8h]

  v4 = a1[1] - *a1;
  v5 = a2;
  v6 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v6 = -1LL;
  }
  else if ( v6 < 0x1000 )
  {
    if ( v6 )
      v2 = operator new(8 * a2);
    else
      v2 = 0LL;
LABEL_5:
    v17 = v2;
    v7 = a1[1];
    v8 = *a1;
    if ( *a1 == v7 )
      goto LABEL_6;
    goto LABEL_25;
  }
  v11 = v6 + 39;
  if ( v6 + 39 < v6 )
    v11 = -1LL;
  v12 = operator new(v11);
  if ( v12 )
  {
    v2 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v2 - 1) = v12;
    goto LABEL_5;
  }
  _o__invalid_parameter_noinfo_noreturn(v13);
LABEL_25:
  try
  {
    v14 = (char *)v2 - (char *)v8;
    do
    {
      v15 = *v8;
      *v8 = 0LL;
      *(__int64 *)((char *)v8++ + v14) = v15;
    }
    while ( v8 != v7 );
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v17, 8 * a2);
    throw;
  }
LABEL_6:
  v9 = *a1;
  if ( *a1 )
  {
    v16 = a1[1];
    if ( v9 != v16 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9++);
      while ( v9 != v16 );
      v9 = *a1;
    }
    std::_Deallocate<16,0>(v9, ((char *)a1[2] - (char *)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v2;
  a1[1] = &v2[v4];
  result = (char *)&v2[v5];
  a1[2] = &v2[v5];
  return result;
}
