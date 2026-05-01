/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___ @ 0x18009C444
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180311F38 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78_____lambda_8475afa15079342a15ccc51689e4ed78___ @ 0x18009BF48 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78_____lambda_8475afa15079342a15ccc51689e4ed78___(
           (__int64)v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
