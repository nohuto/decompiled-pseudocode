/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x180352FFC
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180075B90 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9_____lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x180352F38 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi

  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9_____lambda_5da5069c1ec2393567e9fe231930dfb9___(
           v5,
           a4);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 100LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
