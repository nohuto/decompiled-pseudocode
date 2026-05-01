/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3fb1906df1a9d6575b86cde3260bcd26___ @ 0x18037FB9C
 * Callers:
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x18037FE08 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26___::CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26_____lambda_3fb1906df1a9d6575b86cde3260bcd26___ @ 0x18037F958 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3fb1906df1a9d6575b86cde3260bcd26___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26___::CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26_____lambda_3fb1906df1a9d6575b86cde3260bcd26___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
