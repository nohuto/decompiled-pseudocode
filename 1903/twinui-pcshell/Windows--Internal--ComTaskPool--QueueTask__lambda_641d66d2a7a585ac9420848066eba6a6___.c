/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x18008C3A0
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___ @ 0x18008C4B0 (CIAMGlobals--QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x18008BD28 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
