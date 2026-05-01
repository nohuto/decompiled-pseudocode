/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___ @ 0x18009C728
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18030E47C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___::CTaskWrapper__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c_____lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___ @ 0x18009C198 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___::CTaskWrapper__lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c_____lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
