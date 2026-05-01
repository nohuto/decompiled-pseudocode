/*
 * XREFs of Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_9c267cdafd8e064f323ec4e1c7ae30d4___ @ 0x180291BB4
 * Callers:
 *     ??$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180292540 (--$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV-$shared_ptr@U-$_Task_impl@_N@det.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_9c267cdafd8e064f323ec4e1c7ae30d4___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::Foundation::AsyncOperationCompletedHandler<bool>::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::Foundation::AsyncOperationCompletedHandler<bool>::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::Foundation::AsyncOperationCompletedHandler<bool>::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (volatile signed __int32 *)a2[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)a2[1];
    }
    v6 = *a2;
    *v4 = &off_18050C318;
    a1[6] = 0LL;
    a1[7] = 0LL;
    if ( v5 )
      _InterlockedIncrement(v5 + 2);
    a1[6] = v6;
    a1[7] = v5;
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  a1[37] = v4;
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
