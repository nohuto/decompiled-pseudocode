/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_02e4f415642fa3983915ce56c57d0964___ @ 0x1804051FC
 * Callers:
 *     ??$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18040536C (--$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNot.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_02e4f415642fa3983915ce56c57d0964___::CTaskWrapper__lambda_02e4f415642fa3983915ce56c57d0964_____lambda_02e4f415642fa3983915ce56c57d0964___ @ 0x180404F98 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_02e4f415642fa3983915ce56c57d0964___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_02e4f415642fa3983915ce56c57d0964___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_02e4f415642fa3983915ce56c57d0964___::CTaskWrapper__lambda_02e4f415642fa3983915ce56c57d0964_____lambda_02e4f415642fa3983915ce56c57d0964___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
