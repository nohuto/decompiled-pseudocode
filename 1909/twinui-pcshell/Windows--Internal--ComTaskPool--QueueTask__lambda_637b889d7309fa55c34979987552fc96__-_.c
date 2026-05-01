/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96__&_ @ 0x18036B3EC
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18036B920 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&_::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&___lambda_637b889d7309fa55c34979987552fc96__&_ @ 0x18036B1EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96____(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96____::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96______lambda_637b889d7309fa55c34979987552fc96____(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
