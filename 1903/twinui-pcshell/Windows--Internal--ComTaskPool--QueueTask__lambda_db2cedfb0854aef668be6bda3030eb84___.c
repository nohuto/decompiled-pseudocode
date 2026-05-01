/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___ @ 0x1800AA5AC
 * Callers:
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800AD710 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84_____lambda_db2cedfb0854aef668be6bda3030eb84___ @ 0x1800A9E00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84_____lambda_db2cedfb0854aef668be6bda3030eb84___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
