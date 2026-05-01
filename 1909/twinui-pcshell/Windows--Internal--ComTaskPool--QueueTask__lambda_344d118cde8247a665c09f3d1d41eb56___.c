/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_344d118cde8247a665c09f3d1d41eb56___ @ 0x1800A9420
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032D93C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56___::CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56_____lambda_344d118cde8247a665c09f3d1d41eb56___ @ 0x1800A9014 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_344d118cde8247a665c09f3d1d41eb56___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56___::CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56_____lambda_344d118cde8247a665c09f3d1d41eb56___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
