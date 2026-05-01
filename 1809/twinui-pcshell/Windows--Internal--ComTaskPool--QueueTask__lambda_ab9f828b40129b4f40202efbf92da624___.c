/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ab9f828b40129b4f40202efbf92da624___ @ 0x1801B0104
 * Callers:
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B85F4 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624_____lambda_ab9f828b40129b4f40202efbf92da624___ @ 0x1801AEA2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ab9f828b40129b4f40202efbf92da624___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624___::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624_____lambda_ab9f828b40129b4f40202efbf92da624___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
