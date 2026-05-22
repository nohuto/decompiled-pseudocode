/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180084E38
 * Callers:
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180086740 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180097AB8 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800868B4 (-_Change_array@-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
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
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  char *v13; // r14
  __int64 v14; // r8
  char *v15; // r15
  __int64 v16; // rcx
  char *v17; // rdx
  char *v18; // rcx
  signed __int64 v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+80h] [rbp+8h]
  char *v26; // [rsp+88h] [rbp+10h]

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
  v25 = 8 * v6;
  v15 = &v13[8 * v6];
  try
  {
    v16 = *a3;
    *(_QWORD *)v15 = *a3;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v14 = v25;
    }
    v26 = v15;
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
      v26 = v13;
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
    std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Destroy(v18, v26, v15 + 8);
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Change_array(a1, v13, v8, v11);
  return (__int64)&(*a1)[v25];
}
