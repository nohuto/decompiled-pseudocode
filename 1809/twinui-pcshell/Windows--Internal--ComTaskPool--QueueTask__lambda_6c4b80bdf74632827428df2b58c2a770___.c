/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___ @ 0x1801D0558
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801DFAF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770_____lambda_6c4b80bdf74632827428df2b58c2a770___ @ 0x1801CDC60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770_____lambda_6c4b80bdf74632827428df2b58c2a770___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
