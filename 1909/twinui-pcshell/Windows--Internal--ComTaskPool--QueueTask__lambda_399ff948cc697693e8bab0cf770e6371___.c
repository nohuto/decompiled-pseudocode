/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x180286E90
 * Callers:
 *     _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x18028900C (_lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371_____lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x1802857C4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371_____lambda_399ff948cc697693e8bab0cf770e6371___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return v6;
}
