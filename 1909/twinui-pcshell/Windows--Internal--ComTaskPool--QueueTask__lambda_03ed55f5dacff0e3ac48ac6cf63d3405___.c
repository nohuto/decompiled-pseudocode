/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DEEC
 * Callers:
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x18037E5F0 (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405_____lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DDCC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405_____lambda_03ed55f5dacff0e3ac48ac6cf63d3405___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
