/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5f6a323840668c73676e0eb4f305b4d4___ @ 0x18037FC24
 * Callers:
 *     ??$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18037FD0C (--$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNot.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f6a323840668c73676e0eb4f305b4d4___::CTaskWrapper__lambda_5f6a323840668c73676e0eb4f305b4d4_____lambda_5f6a323840668c73676e0eb4f305b4d4___ @ 0x18037F9E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f6a323840668c73676e0eb4f305b4d4___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5f6a323840668c73676e0eb4f305b4d4___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f6a323840668c73676e0eb4f305b4d4___::CTaskWrapper__lambda_5f6a323840668c73676e0eb4f305b4d4_____lambda_5f6a323840668c73676e0eb4f305b4d4___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
