/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2998a484fcd7d742033ed970065ccf76___ @ 0x180061DF0
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76___::CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76_____lambda_2998a484fcd7d742033ed970065ccf76___ @ 0x180061E7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2998a484fcd7d742033ed970065ccf76___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v4 = dword_180510348;
  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76___::CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76_____lambda_2998a484fcd7d742033ed970065ccf76___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, v4, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
