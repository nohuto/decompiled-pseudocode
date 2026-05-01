/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x18018A688
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18018E150 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb_____lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x180189E44 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b5ce8514cf5c64bd52309ed6df623feb___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb_____lambda_b5ce8514cf5c64bd52309ed6df623feb___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
