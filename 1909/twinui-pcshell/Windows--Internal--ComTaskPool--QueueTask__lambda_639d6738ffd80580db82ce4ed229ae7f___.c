/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180171900
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180172200 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f_____lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180171794 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f_____lambda_639d6738ffd80580db82ce4ed229ae7f___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return v6;
}
