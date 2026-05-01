/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6e3ab6272f90947ba1cd229626024096___ @ 0x18024E9D8
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096___::CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096_____lambda_6e3ab6272f90947ba1cd229626024096___ @ 0x18024E6D4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6e3ab6272f90947ba1cd229626024096___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096___::CTaskWrapper__lambda_6e3ab6272f90947ba1cd229626024096_____lambda_6e3ab6272f90947ba1cd229626024096___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
