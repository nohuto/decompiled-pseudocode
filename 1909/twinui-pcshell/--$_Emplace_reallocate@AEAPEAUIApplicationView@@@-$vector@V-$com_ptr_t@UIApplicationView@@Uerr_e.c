/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1803BA8BC
 * Callers:
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1803BAAFC (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18013AC30 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 *v15; // r15
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // [rsp+20h] [rbp-58h]
  void *v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  __int64 *v30; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
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
  v14 = (__int64)v13;
  v28 = v13;
  v29 = 8 * v6;
  v15 = &v13[v6];
  v27 = v15 + 1;
  try
  {
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      v15,
      *a3);
    v30 = v15;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v14 - (_QWORD)v17;
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
      if ( v17 != v4 )
      {
        v23 = v14 - (_QWORD)v17;
        do
        {
          v24 = *v17;
          *v17 = 0LL;
          *(__int64 *)((char *)v17++ + v23) = v24;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v30 = (__int64 *)v14;
      if ( v4 != v16 )
      {
        v20 = v29;
        v25 = v14 + v29 - (_QWORD)v4;
        do
        {
          v26 = *v4;
          *v4 = 0LL;
          *(__int64 *)((char *)v4++ + v25 + 8) = v26;
        }
        while ( v4 != v16 );
        goto LABEL_15;
      }
    }
    v20 = v29;
LABEL_15:
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array((__int64)a1, v14, v8, v11);
    result = (__int64)*a1 + v20;
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(v21, v30, v27);
    std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
