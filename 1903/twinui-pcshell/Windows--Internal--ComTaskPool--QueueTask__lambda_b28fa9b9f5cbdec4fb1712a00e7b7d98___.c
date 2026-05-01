/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___ @ 0x180226838
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180232FF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_____lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___ @ 0x180224A40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v6 = 0LL;
  v7 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_____lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
