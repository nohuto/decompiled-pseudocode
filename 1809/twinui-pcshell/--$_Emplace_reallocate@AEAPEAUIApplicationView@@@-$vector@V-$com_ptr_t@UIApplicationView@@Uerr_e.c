/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1800965F4
 * Callers:
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x180096814 (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18008C9DC (-_Xlength@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18009A408 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v3; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  size_t v11; // rcx
  char *v12; // r14
  __int64 v13; // r13
  char *v14; // rdx
  char *v15; // rcx
  signed __int64 v16; // r8
  __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rax

  v3 = a2;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Xlength();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
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
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = 8 * v5;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v12[8 * v5],
    *a3);
  v14 = a1[1];
  v15 = *a1;
  if ( v3 == v14 )
  {
    if ( v15 != v14 )
    {
      v16 = v12 - v15;
      do
      {
        v17 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)&v15[v16] = v17;
        v15 += 8;
      }
      while ( v15 != v14 );
    }
  }
  else
  {
    if ( v15 != v3 )
    {
      v18 = v12 - v15;
      do
      {
        v19 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)&v15[v18] = v19;
        v15 += 8;
      }
      while ( v15 != v3 );
      v14 = a1[1];
    }
    if ( v3 != v14 )
    {
      v20 = &v12[v13 - (_QWORD)v3];
      do
      {
        v21 = *(_QWORD *)v3;
        *(_QWORD *)v3 = 0LL;
        *(_QWORD *)&v3[(_QWORD)v20 + 8] = v21;
        v3 += 8;
      }
      while ( v3 != v14 );
    }
  }
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array(a1, v12, v7, v10, v12, -2LL);
  return (__int64)&(*a1)[v13];
}
