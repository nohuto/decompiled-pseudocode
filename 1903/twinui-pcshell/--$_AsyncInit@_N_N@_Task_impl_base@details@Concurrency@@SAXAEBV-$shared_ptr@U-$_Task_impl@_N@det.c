/*
 * XREFs of ??$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1802EBB10
 * Callers:
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x1802EAF80 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_9c267cdafd8e064f323ec4e1c7ae30d4___ @ 0x1802EB2B4 (Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandler_bool__.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Concurrency::details::_Task_impl_base::_AsyncInit<bool,bool>(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  *(_OWORD *)v9 = 0LL;
  v5 = a1[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[1];
  }
  v9[0] = *a1;
  v9[1] = v5;
  v6 = Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_9c267cdafd8e064f323ec4e1c7ae30d4___(
         v4,
         v9);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v6);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return Concurrency::details::_Task_impl<bool>::_SetUnwrappedAsyncOp(*a1, a2);
}
