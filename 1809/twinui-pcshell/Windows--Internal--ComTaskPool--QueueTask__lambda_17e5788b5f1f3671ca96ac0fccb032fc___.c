/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___ @ 0x18024E950
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc___::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc_____lambda_17e5788b5f1f3671ca96ac0fccb032fc___ @ 0x18024E668 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc___::CTaskWrapper__lambda_17e5788b5f1f3671ca96ac0fccb032fc_____lambda_17e5788b5f1f3671ca96ac0fccb032fc___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
