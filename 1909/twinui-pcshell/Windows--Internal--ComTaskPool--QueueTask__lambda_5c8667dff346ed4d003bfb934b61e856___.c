/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1803ABF40
 * Callers:
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1803AD050 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1803ABB38 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return v6;
}
