/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___ @ 0x1801264D8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___ @ 0x180126AC8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8_____lambda_5ce05ca81319de189dd08790f978f8a8___ @ 0x180125A64 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8_____lambda_5ce05ca81319de189dd08790f978f8a8___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
