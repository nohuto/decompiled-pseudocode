/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x180128CF4
 * Callers:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18012A230 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x180128764 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
