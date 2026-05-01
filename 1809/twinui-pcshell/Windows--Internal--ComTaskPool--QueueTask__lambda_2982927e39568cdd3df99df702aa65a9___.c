/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x180267090
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9___::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9_____lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x180265180 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9___::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9_____lambda_2982927e39568cdd3df99df702aa65a9___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
