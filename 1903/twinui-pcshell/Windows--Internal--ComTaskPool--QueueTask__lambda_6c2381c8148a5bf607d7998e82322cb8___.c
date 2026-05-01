/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x18036F3DC
 * Callers:
 *     ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x18036F640 (-ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8_____lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x18036F090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___(
        unsigned int a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8_____lambda_6c2381c8148a5bf607d7998e82322cb8___(
           (__int64)v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
