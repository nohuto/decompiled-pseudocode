/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18003D3D0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1800899AC (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  char *v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 *v9; // r14
  char *result; // rax
  __int64 v11; // rdx
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // r8
  __int64 v16; // rax
  __int64 *v17; // r12

  v3 = a1[1] - *a1;
  v4 = 8 * a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v11 = -1LL;
    v5 = -1LL;
  }
  else
  {
    if ( v5 < 0x1000 )
    {
      if ( v5 )
        v6 = (char *)operator new(8 * a2);
      else
        v6 = 0LL;
      goto LABEL_5;
    }
    v11 = -1LL;
  }
  v12 = v5 + 39;
  if ( v5 + 39 >= v5 )
    goto LABEL_13;
  while ( 1 )
  {
    v12 = v11;
LABEL_13:
    v13 = operator new(v12);
    if ( v13 )
      break;
    _o__invalid_parameter_noinfo_noreturn(v14);
  }
  v6 = (char *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v6 - 1) = v13;
LABEL_5:
  v7 = a1[1];
  v8 = *a1;
  if ( *a1 != v7 )
  {
    try
    {
      v15 = v6 - (char *)v8;
      do
      {
        v16 = *v8;
        *v8 = 0LL;
        *(__int64 *)((char *)v8++ + v15) = v16;
      }
      while ( v8 != v7 );
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v6, 8 * a2);
      throw;
    }
  }
  v9 = *a1;
  if ( *a1 )
  {
    v17 = a1[1];
    if ( v9 != v17 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9++);
      while ( v9 != v17 );
      v9 = *a1;
    }
    std::_Deallocate<16,0>(v9, ((char *)a1[2] - (char *)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = (__int64 *)v6;
  a1[1] = (__int64 *)&v6[8 * v3];
  result = &v6[v4];
  a1[2] = (__int64 *)&v6[v4];
  return result;
}
