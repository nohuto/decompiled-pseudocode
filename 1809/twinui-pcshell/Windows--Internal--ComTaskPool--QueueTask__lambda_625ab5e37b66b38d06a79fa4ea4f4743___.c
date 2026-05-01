/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_625ab5e37b66b38d06a79fa4ea4f4743___ @ 0x1802FDD6C
 * Callers:
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x1802FE470 (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743_____lambda_625ab5e37b66b38d06a79fa4ea4f4743___ @ 0x1802FDC4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_625ab5e37b66b38d06a79fa4ea4f4743___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743_____lambda_625ab5e37b66b38d06a79fa4ea4f4743___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
