/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___ @ 0x1803AE13C
 * Callers:
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1803AE870 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___::CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2_____lambda_3723e99f8ac1c766dbc5b421cdf09ee2___ @ 0x1803ADE70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___::CTaskWrapper__lambda_3723e99f8ac1c766dbc5b421cdf09ee2_____lambda_3723e99f8ac1c766dbc5b421cdf09ee2___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
