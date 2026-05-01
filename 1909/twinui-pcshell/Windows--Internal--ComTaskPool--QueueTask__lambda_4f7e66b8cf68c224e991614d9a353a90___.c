/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4f7e66b8cf68c224e991614d9a353a90___ @ 0x180405284
 * Callers:
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x180405468 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90_____lambda_4f7e66b8cf68c224e991614d9a353a90___ @ 0x180405008 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4f7e66b8cf68c224e991614d9a353a90___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90_____lambda_4f7e66b8cf68c224e991614d9a353a90___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
