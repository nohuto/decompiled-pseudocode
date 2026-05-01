/*
 * XREFs of ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x180292860
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180292C94 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x180292420 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     ??0?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEAA@AEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@AEBV?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@4@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@AEBVtask_continuation_context@2@W4_TaskInliningMode@details@2@@Z @ 0x18029306C (--0-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$integral_co.c)
 *     ?_CreateImpl@?$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x180295874 (-_CreateImpl@-$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@.c)
 *     ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180296BF0 (-_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Concurrency::task<bool>::_ThenImpl<bool,std::function<void (Concurrency::task<bool>)>>(
        Concurrency::details::_Task_impl_base **a1,
        _QWORD *a2,
        int a3,
        __int64 *a4)
{
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // rcx
  struct Concurrency::details::_ContinuationTaskHandleBase *v12; // rax
  std::_Ref_count_base *v14[2]; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]
  unsigned int v18; // [rsp+A0h] [rbp+30h]

  if ( !*a4 )
    *a4 = 2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = (volatile signed __int32 *)a4[2];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a4[2];
  }
  v14[0] = (std::_Ref_count_base *)a4[1];
  v14[1] = (std::_Ref_count_base *)v8;
  v15 = a4[3];
  v9 = *a4;
  v16 = 0LL;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  v16 = *(_OWORD *)v14;
  v17 = v15;
  Concurrency::task<unsigned char>::_CreateImpl(a2, v9, &v16);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  *(_BYTE *)(*a2 + 12LL) = *((_BYTE *)*a1 + 12) != 0;
  *(_BYTE *)(*a2 + 13LL) = 0;
  v10 = *a2;
  *(_QWORD *)(v10 + 320) = a4[4];
  v11 = (void **)(v10 + 328);
  if ( v11 != (void **)(a4 + 5) )
    std::vector<void *>::_Assign_range<void * *>(v11, (char *)a4[5], a4[6]);
  v18 = (unsigned int)operator new(0x88uLL);
  v12 = (struct Concurrency::details::_ContinuationTaskHandleBase *)Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>(
                                                                      v18,
                                                                      (_DWORD)a1,
                                                                      (_DWORD)a2,
                                                                      a3,
                                                                      a4[9],
                                                                      *((_DWORD *)a4 + 16));
  Concurrency::details::_Task_impl_base::_ScheduleContinuation(*a1, v12);
  return a2;
}
