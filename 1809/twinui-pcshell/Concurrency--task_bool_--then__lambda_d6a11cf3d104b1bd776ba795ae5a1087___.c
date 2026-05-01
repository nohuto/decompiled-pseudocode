/*
 * XREFs of Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180292C94
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180293D0C (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18013EDA4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x180292420 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x180292860 (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x180292F6C (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--_lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x180293680 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x180293CB4 (--1task_options@Concurrency@@QEAA@XZ.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x180295AB4 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 *     ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x180296650 (-_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___(
        Concurrency::details::_Task_impl_base **a1,
        _QWORD *a2,
        __int64 a3)
{
  Concurrency::details::_Task_impl_base *v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _BYTE v13[16]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _QWORD v18[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  _BYTE v21[32]; // [rsp+98h] [rbp-70h] BYREF
  void *v22; // [rsp+B8h] [rbp-50h]
  char v23; // [rsp+C0h] [rbp-48h]
  char v24; // [rsp+C8h] [rbp-40h]
  void *v25; // [rsp+D0h] [rbp-38h]
  void *v26; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v27[2]; // [rsp+F8h] [rbp-10h] BYREF
  std::_Ref_count_base *v28; // [rsp+108h] [rbp+0h]
  _BYTE v29[40]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v30[7]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v31; // [rsp+180h] [rbp+78h]
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v17 = -2LL;
  Concurrency::task_options::task_options((Concurrency::task_options *)v21);
  v19 = 0LL;
  v20 = 0LL;
  v18[2] = retaddr;
  v24 = 1;
  v25 = retaddr;
  std::vector<void *>::_Assign_range<void * *>(&v26, 0LL, 0LL);
  std::vector<void *>::_Tidy((__int64)&v19);
  Concurrency::details::_ContextCallback::_Assign((Concurrency::details::_ContextCallback *)v13, v22);
  v13[8] = v23;
  v6 = *a1;
  if ( !*a1 )
    Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
  v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  }
  v14 = *((_QWORD *)v6 + 36);
  v15 = (std::_Ref_count_base *)v7;
  v16 = *((_QWORD *)v6 + 38);
  Concurrency::details::_ThenImplOptions::_CreateOptions(v27, v21, v13, &v14);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v8 = (__int64 *)lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_(v18, a3);
  v31 = 0LL;
  v30[0] = off_180506428;
  v9 = *v8;
  *v8 = 0LL;
  v30[1] = v9;
  v10 = v8[1];
  v8[1] = 0LL;
  v30[2] = v10;
  v31 = v30;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8 + 1);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
  Concurrency::task<bool>::_ThenImpl<bool,std::function<void (Concurrency::task<bool>)>>(a1, a2, (int)v30, v27);
  if ( v31 )
  {
    v11 = v30;
    LOBYTE(v11) = v31 != v30;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v31 + 32LL))(v31, v11);
    v31 = 0LL;
  }
  std::vector<void *>::_Tidy((__int64)v29);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)v13);
  Concurrency::task_options::~task_options((Concurrency::task_options *)v21);
  return a2;
}
