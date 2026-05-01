/*
 * XREFs of ??1task_options@Concurrency@@QEAA@XZ @ 0x180293CB4
 * Callers:
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x180292A00 (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool______ptr64__::_1_::dtor$0 @ 0x180292A91 (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool______ptr64__--_1_--dtor$0.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180292C94 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$0 @ 0x180292E6E (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18013EDA4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1802968E8 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::task_options::~task_options(Concurrency::task_options *this)
{
  Concurrency::details::_RefCounter *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  std::vector<void *>::_Tidy((__int64)this + 64);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::task_options *)((char *)this + 32));
  v2 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 3);
  if ( v2 )
    Concurrency::details::_RefCounter::_Release(v2);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
