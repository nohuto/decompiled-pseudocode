/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_243107b6e7951c22bf872808b8683140___ @ 0x1802C4460
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001BDFC (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140_____lambda_243107b6e7951c22bf872808b8683140___ @ 0x1802C4178 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_243107b6e7951c22bf872808b8683140___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v6; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v6 = 0LL;
  v7 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140_____lambda_243107b6e7951c22bf872808b8683140___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
