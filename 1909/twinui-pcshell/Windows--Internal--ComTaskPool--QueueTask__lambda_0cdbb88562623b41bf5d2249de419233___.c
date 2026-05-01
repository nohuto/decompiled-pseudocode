/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___ @ 0x1800A938C
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180331408 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233___::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233_____lambda_0cdbb88562623b41bf5d2249de419233___ @ 0x1800A8FA8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233___::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233_____lambda_0cdbb88562623b41bf5d2249de419233___(
           (__int64)v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
