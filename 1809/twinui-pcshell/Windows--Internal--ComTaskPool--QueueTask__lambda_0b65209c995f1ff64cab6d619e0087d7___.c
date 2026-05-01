/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___ @ 0x18021012C
 * Callers:
 *     _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x180212B40 (_lambda_c3441874af9188b8377da12ab0198c01_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7_____lambda_0b65209c995f1ff64cab6d619e0087d7___ @ 0x18020EA04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0b65209c995f1ff64cab6d619e0087d7___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7_____lambda_0b65209c995f1ff64cab6d619e0087d7___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
