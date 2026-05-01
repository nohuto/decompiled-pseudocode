/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___ @ 0x1803708C0
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180370DA0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___ @ 0x1803706F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
