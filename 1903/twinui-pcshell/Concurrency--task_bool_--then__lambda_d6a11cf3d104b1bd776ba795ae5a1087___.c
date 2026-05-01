/*
 * XREFs of Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x1802EC180
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x1802ECAC4 (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18016A314 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x1801C3C28 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x1801C4950 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x1801C5194 (--1task_options@Concurrency@@QEAA@XZ.c)
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x1802EBD4C (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x1802EC460 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--_lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x1802EE2F8 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 *     ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x1802EEA78 (-_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ.c)
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
  __int64 v11; // rdx
  _BYTE v14[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  _QWORD v19[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  _BYTE v22[32]; // [rsp+98h] [rbp-70h] BYREF
  void *v23; // [rsp+B8h] [rbp-50h]
  char v24; // [rsp+C0h] [rbp-48h]
  char v25; // [rsp+C8h] [rbp-40h]
  void *v26; // [rsp+D0h] [rbp-38h]
  _BYTE v27[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v28[2]; // [rsp+F8h] [rbp-10h] BYREF
  std::_Ref_count_base *v29; // [rsp+108h] [rbp+0h]
  _BYTE v30[40]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v31[7]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v32; // [rsp+180h] [rbp+78h]
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v18 = -2LL;
  Concurrency::task_options::task_options((Concurrency::task_options *)v22);
  v20 = 0LL;
  v21 = 0LL;
  v19[2] = retaddr;
  v25 = 1;
  v26 = retaddr;
  std::vector<void *>::_Assign_range<void * *>((__int64)v27, 0LL, 0LL);
  std::vector<void *>::_Tidy((__int64)&v20);
  Concurrency::details::_ContextCallback::_Assign((Concurrency::details::_ContextCallback *)v14, v23);
  v14[8] = v24;
  v6 = *a1;
  if ( !*a1 )
    Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
  v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  }
  v15 = *((_QWORD *)v6 + 36);
  v16 = (std::_Ref_count_base *)v7;
  v17 = *((_QWORD *)v6 + 38);
  Concurrency::details::_ThenImplOptions::_CreateOptions(v28, v22, v14, &v15, a2);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v8 = (__int64 *)lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_(v19, a3);
  v32 = 0LL;
  v31[0] = off_1805904B8;
  v9 = *v8;
  *v8 = 0LL;
  v31[1] = v9;
  v10 = v8[1];
  v8[1] = 0LL;
  v31[2] = v10;
  v32 = v31;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8 + 1);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
  Concurrency::task<bool>::_ThenImpl<bool,std::function<void (Concurrency::task<bool>)>>(a1, a2, (int)v31, v28);
  if ( v32 )
  {
    LOBYTE(v11) = v32 != v31;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v32 + 32LL))(v32, v11);
    v32 = 0LL;
  }
  std::vector<void *>::_Tidy((__int64)v30);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)v14);
  Concurrency::task_options::~task_options((Concurrency::task_options *)v22);
  return a2;
}
