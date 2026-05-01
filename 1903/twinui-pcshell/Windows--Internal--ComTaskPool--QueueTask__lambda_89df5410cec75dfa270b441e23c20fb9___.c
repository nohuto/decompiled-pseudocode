/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_89df5410cec75dfa270b441e23c20fb9___ @ 0x18024680C
 * Callers:
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180248000 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9_____lambda_89df5410cec75dfa270b441e23c20fb9___ @ 0x180245E10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_89df5410cec75dfa270b441e23c20fb9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9_____lambda_89df5410cec75dfa270b441e23c20fb9___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
