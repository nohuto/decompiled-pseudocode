/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_417362b0a1391b76000680eec230619f___ @ 0x180170E94
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180171B5C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f_____lambda_417362b0a1391b76000680eec230619f___ @ 0x18016FC5C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_417362b0a1391b76000680eec230619f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f_____lambda_417362b0a1391b76000680eec230619f___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
