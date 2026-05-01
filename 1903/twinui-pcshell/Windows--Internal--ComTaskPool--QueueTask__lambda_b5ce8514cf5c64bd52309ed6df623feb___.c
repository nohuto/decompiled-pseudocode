/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x18016B2E8
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18016EDC0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb_____lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x18016AAA4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___--CTaskW.c)
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
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
