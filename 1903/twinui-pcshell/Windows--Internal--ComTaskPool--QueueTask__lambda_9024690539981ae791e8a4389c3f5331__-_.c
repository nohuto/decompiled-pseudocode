/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9024690539981ae791e8a4389c3f5331__&_ @ 0x180159B44
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x180083CF0 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331__&_::CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331__&___lambda_9024690539981ae791e8a4389c3f5331__&_ @ 0x180159898 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9024690539981ae791e8a4389c3f5331____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331____::CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331______lambda_9024690539981ae791e8a4389c3f5331____(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
