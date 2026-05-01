/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_be511633a1c3fc9433c6a1507838a6b9___ @ 0x18014FCEC
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___ @ 0x18015008C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9_____lambda_be511633a1c3fc9433c6a1507838a6b9___ @ 0x18014F174 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_be511633a1c3fc9433c6a1507838a6b9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // edi

  v6 = 0LL;
  v7 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9_____lambda_be511633a1c3fc9433c6a1507838a6b9___(
           v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
