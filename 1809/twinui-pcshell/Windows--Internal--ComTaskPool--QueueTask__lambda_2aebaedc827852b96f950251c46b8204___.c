/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2aebaedc827852b96f950251c46b8204___ @ 0x180089708
 * Callers:
 *     _lambda_613b54cc2e99550f8413255175a70a8b_::operator() @ 0x180089B74 (_lambda_613b54cc2e99550f8413255175a70a8b_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204___::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204_____lambda_2aebaedc827852b96f950251c46b8204___ @ 0x18008922C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2aebaedc827852b96f950251c46b8204___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204___::CTaskWrapper__lambda_2aebaedc827852b96f950251c46b8204_____lambda_2aebaedc827852b96f950251c46b8204___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
