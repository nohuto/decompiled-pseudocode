/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___ @ 0x1802A4FB8
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180033D5C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_____lambda_b7a65526da0b0c1d1f69877e76cb9ec5___ @ 0x1802A4CC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v6 = 0LL;
  v7 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_____lambda_b7a65526da0b0c1d1f69877e76cb9ec5___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
