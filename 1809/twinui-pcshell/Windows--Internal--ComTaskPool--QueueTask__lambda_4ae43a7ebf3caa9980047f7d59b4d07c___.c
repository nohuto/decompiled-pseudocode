/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___ @ 0x180092064
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x1802B8854 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c_____lambda_4ae43a7ebf3caa9980047f7d59b4d07c___ @ 0x180091B14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c_____lambda_4ae43a7ebf3caa9980047f7d59b4d07c___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
