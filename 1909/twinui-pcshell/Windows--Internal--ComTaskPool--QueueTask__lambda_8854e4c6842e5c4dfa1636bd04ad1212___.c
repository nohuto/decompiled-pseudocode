/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x18012AEE0
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_f0242e377eca6be80837de18adbd4ab0___ @ 0x18012B1C8 (CIAMGlobals--QueueViewManagementTask__lambda_f0242e377eca6be80837de18adbd4ab0___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x180129228 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
