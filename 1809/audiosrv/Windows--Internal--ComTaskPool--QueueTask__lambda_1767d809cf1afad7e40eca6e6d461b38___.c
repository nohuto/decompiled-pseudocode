/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1767d809cf1afad7e40eca6e6d461b38___ @ 0x180136620
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18013A7F0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38_____lambda_1767d809cf1afad7e40eca6e6d461b38___ @ 0x180135E64 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1767d809cf1afad7e40eca6e6d461b38___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38_____lambda_1767d809cf1afad7e40eca6e6d461b38___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
