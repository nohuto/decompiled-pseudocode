/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_7d6fb6ca628c3c64296120b05a8db9c8___ @ 0x180069A04
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18013F780 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8_____lambda_7d6fb6ca628c3c64296120b05a8db9c8___ @ 0x180069804 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_7d6fb6ca628c3c64296120b05a8db9c8___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8_____lambda_7d6fb6ca628c3c64296120b05a8db9c8___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
