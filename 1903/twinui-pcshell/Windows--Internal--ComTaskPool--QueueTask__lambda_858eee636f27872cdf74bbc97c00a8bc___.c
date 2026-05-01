/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___ @ 0x180292E70
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180293920 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc_____lambda_858eee636f27872cdf74bbc97c00a8bc___ @ 0x180292D00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc_____lambda_858eee636f27872cdf74bbc97c00a8bc___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
