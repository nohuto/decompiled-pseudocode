/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a5314efdfe6b9f90147b5239d1654f63___ @ 0x18009C56C
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18031205C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5314efdfe6b9f90147b5239d1654f63___::CTaskWrapper__lambda_a5314efdfe6b9f90147b5239d1654f63_____lambda_a5314efdfe6b9f90147b5239d1654f63___ @ 0x18009C034 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a5314efdfe6b9f90147b5239d1654f63___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a5314efdfe6b9f90147b5239d1654f63___(
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
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5314efdfe6b9f90147b5239d1654f63___::CTaskWrapper__lambda_a5314efdfe6b9f90147b5239d1654f63_____lambda_a5314efdfe6b9f90147b5239d1654f63___(
           (__int64)v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
