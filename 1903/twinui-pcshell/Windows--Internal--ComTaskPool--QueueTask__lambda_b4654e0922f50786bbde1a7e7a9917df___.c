/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b4654e0922f50786bbde1a7e7a9917df___ @ 0x18009C600
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803118B0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df___::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df_____lambda_b4654e0922f50786bbde1a7e7a9917df___ @ 0x18009C0AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b4654e0922f50786bbde1a7e7a9917df___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df___::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df_____lambda_b4654e0922f50786bbde1a7e7a9917df___(
           v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
