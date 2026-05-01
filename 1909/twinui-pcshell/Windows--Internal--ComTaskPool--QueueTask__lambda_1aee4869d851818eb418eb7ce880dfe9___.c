/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x18038DC3C
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x18038E1C8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x18038DA30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
