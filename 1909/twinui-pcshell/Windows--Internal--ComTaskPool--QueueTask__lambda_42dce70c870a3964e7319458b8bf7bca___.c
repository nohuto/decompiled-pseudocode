/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___ @ 0x1800B8E0C
 * Callers:
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800BBD08 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca_____lambda_42dce70c870a3964e7319458b8bf7bca___ @ 0x1800B867C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca_____lambda_42dce70c870a3964e7319458b8bf7bca___(
           (__int64)v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
