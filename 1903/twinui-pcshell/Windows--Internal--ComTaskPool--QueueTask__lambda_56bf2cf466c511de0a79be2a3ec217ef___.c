/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___ @ 0x18036F350
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x18036F17C (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef_____lambda_56bf2cf466c511de0a79be2a3ec217ef___ @ 0x18036F020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef_____lambda_56bf2cf466c511de0a79be2a3ec217ef___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
