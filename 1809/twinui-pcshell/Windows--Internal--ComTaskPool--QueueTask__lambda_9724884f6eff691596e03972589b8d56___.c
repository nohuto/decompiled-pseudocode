/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9724884f6eff691596e03972589b8d56___ @ 0x1800921F4
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1802B81A0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56_____lambda_9724884f6eff691596e03972589b8d56___ @ 0x180091C5C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9724884f6eff691596e03972589b8d56___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56_____lambda_9724884f6eff691596e03972589b8d56___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
