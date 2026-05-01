/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6f5f86943447a9eee0358fb4a1366934___ @ 0x1800A965C
 * Callers:
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180331A14 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934_____lambda_6f5f86943447a9eee0358fb4a1366934___ @ 0x1800A91BC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6f5f86943447a9eee0358fb4a1366934___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934_____lambda_6f5f86943447a9eee0358fb4a1366934___(
           v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
