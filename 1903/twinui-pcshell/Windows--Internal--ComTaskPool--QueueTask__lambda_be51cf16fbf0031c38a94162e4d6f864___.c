/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_be51cf16fbf0031c38a94162e4d6f864___ @ 0x18009C694
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180311E48 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864___::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864_____lambda_be51cf16fbf0031c38a94162e4d6f864___ @ 0x18009C114 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_be51cf16fbf0031c38a94162e4d6f864___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864___::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864_____lambda_be51cf16fbf0031c38a94162e4d6f864___(
           (__int64)v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
