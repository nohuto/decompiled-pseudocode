/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___ @ 0x18015FE88
 * Callers:
 *     ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18007F044 (-_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312___::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312_____lambda_b18e3bcd543815e33ea05325daf44312___ @ 0x18015EDE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312___::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312_____lambda_b18e3bcd543815e33ea05325daf44312___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
