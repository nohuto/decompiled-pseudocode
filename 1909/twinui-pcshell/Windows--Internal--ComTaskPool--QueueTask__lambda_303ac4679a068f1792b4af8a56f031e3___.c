/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_303ac4679a068f1792b4af8a56f031e3___ @ 0x180053220
 * Callers:
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180053114 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3_____lambda_303ac4679a068f1792b4af8a56f031e3___ @ 0x1800533B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_303ac4679a068f1792b4af8a56f031e3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3_____lambda_303ac4679a068f1792b4af8a56f031e3___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
