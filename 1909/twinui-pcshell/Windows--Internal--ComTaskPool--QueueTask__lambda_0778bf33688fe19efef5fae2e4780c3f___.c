/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0778bf33688fe19efef5fae2e4780c3f___ @ 0x18008EE48
 * Callers:
 *     _lambda_3eaa8416a18b3d4d2003ae87be4de258_::operator() @ 0x18008F4CC (_lambda_3eaa8416a18b3d4d2003ae87be4de258_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f___::CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f_____lambda_0778bf33688fe19efef5fae2e4780c3f___ @ 0x18008E968 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0778bf33688fe19efef5fae2e4780c3f___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f___::CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f_____lambda_0778bf33688fe19efef5fae2e4780c3f___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v8;
}
