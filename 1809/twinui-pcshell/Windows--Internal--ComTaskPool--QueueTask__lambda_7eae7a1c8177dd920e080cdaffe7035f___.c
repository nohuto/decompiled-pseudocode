/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___ @ 0x18013FB08
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801432B0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f_____lambda_7eae7a1c8177dd920e080cdaffe7035f___ @ 0x18013F344 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f_____lambda_7eae7a1c8177dd920e080cdaffe7035f___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
