/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___ @ 0x1800A94A0
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180330D80 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c_____lambda_39b1066faff2db62f569cb34f066b88c___ @ 0x1800A9078 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c_____lambda_39b1066faff2db62f569cb34f066b88c___(
           v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
