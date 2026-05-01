/*
 * XREFs of ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1801EC72C
 * Callers:
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801E048C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     ??1_Task_impl_base@details@Concurrency@@UEAA@XZ @ 0x1801E409C (--1_Task_impl_base@details@Concurrency@@UEAA@XZ.c)
 *     ??1cancellation_token@Concurrency@@QEAA@XZ @ 0x1801E4134 (--1cancellation_token@Concurrency@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x1801E41B4 (--1task_options@Concurrency@@QEAA@XZ.c)
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x1801EBEA4 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801EC038 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 *     ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x1801EC408 (-_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x18030A430 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x18030D7B8 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Concurrency::details::_RefCounter::_Release(Concurrency::details::_RefCounter *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(Concurrency::details::_RefCounter *))(*(_QWORD *)this + 8LL))(this);
  return v1;
}
