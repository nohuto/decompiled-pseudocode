/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18040EC5C
 * Callers:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18040EE40 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18040EBF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
