/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___ @ 0x180092304
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802B8D70 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f_____lambda_ab0326ecea74eabee98d06838221c40f___ @ 0x180091D30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f_____lambda_ab0326ecea74eabee98d06838221c40f___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
