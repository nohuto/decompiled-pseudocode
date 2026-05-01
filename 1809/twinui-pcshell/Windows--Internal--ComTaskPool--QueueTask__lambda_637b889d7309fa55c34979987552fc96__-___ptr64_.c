/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96__&___ptr64_ @ 0x1802EB13C
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1802EB670 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&___ptr64_::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&___ptr64___lambda_637b889d7309fa55c34979987552fc96__&___ptr64_ @ 0x1802EAF3C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__-___ptr64.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96______ptr64_(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96______ptr64_::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96______ptr64___lambda_637b889d7309fa55c34979987552fc96______ptr64_(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
