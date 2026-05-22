/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18008C828
 * Callers:
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D190 (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800868B4 (-_Change_array@-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  size_t v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 *v15; // r15
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 result; // rax
  void *v26; // [rsp+20h] [rbp-48h]
  __int64 *v27; // [rsp+70h] [rbp+8h]

  v3 = a2;
  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = (__int64)v12;
  v26 = v12;
  v14 = v5;
  v15 = &v12[v5];
  try
  {
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(v15, *a3);
    v27 = v15;
    v16 = a1[1];
    v17 = *a1;
    if ( v3 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v13 - (_QWORD)v17;
        do
        {
          v19 = *v17;
          *v17 = 0LL;
          *(__int64 *)((char *)v17++ + v18) = v19;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v3 )
      {
        v20 = v13 - (_QWORD)v17;
        do
        {
          v21 = *v17;
          *v17 = 0LL;
          *(__int64 *)((char *)v17++ + v20) = v21;
        }
        while ( v17 != v3 );
        v16 = a1[1];
      }
      v27 = (__int64 *)v13;
      if ( v3 != v16 )
      {
        v22 = v13 + v14 * 8 - (_QWORD)v3;
        do
        {
          v23 = *v3;
          *v3 = 0LL;
          *(__int64 *)((char *)v3++ + v22 + 8) = v23;
        }
        while ( v3 != v16 );
      }
    }
    std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Change_array((__int64)a1, v13, v7, v10);
    result = (__int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Destroy(v24, v27, v15 + 1);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
