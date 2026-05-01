/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000B4AC
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18000CC10 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180034FDC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x18009AC88 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18000B5F4 (-_Change_array@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
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
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 *v16; // r15
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp+8h]
  _QWORD *v31; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v14 = v13;
    v29 = v13;
    v15 = 8 * v6;
    v30 = v6;
    v16 = (__int64 *)(8 * v6 + v13);
    v28 = v16 + 1;
    v17 = *a3;
    *v16 = *a3;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v15 = v30 * 8;
    }
    v31 = v16;
    v18 = a1[1];
    v19 = *a1;
    if ( v4 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v14 - (_QWORD)v19;
        do
        {
          v21 = *v19;
          *v19 = 0LL;
          *(__int64 *)((char *)v19++ + v20) = v21;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v4 )
      {
        v24 = v14 - (_QWORD)v19;
        do
        {
          v25 = *v19;
          *v19 = 0LL;
          *(__int64 *)((char *)v19++ + v24) = v25;
        }
        while ( v19 != v4 );
        v18 = a1[1];
      }
      v31 = (_QWORD *)v14;
      if ( v4 != v18 )
      {
        v26 = v14 + v15 - (_QWORD)v4;
        do
        {
          v27 = *v4;
          *v4 = 0LL;
          *(__int64 *)((char *)v4++ + v26 + 8) = v27;
        }
        while ( v4 != v18 );
      }
    }
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Change_array(a1, v14, v8, v11);
    result = (__int64)&(*a1)[v30];
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Destroy(v22, v31, v28);
    std::_Deallocate<16,0>(v29, 8 * v11);
    throw;
  }
  return result;
}
