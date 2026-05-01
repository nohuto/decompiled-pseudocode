/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___ @ 0x18008C428
 * Callers:
 *     _lambda_136faaf7160992a8f53bd109551410c5_::operator() @ 0x18008C964 (_lambda_136faaf7160992a8f53bd109551410c5_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3_____lambda_799c8fcca6c2609bbf12201b8ac3c3e3___ @ 0x18008BD8C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3_____lambda_799c8fcca6c2609bbf12201b8ac3c3e3___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
