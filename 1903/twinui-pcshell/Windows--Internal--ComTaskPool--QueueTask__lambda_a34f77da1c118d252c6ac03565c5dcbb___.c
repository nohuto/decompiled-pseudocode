/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___ @ 0x18009C4D8
 * Callers:
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb_____lambda_a34f77da1c118d252c6ac03565c5dcbb___ @ 0x18009BFB4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___(
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
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb_____lambda_a34f77da1c118d252c6ac03565c5dcbb___(
           v7,
           a4);
  v9 = SHTaskPoolQueueTask(a1, 2LL, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
