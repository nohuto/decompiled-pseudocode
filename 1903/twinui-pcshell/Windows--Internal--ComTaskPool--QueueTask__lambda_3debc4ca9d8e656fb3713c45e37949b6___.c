/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x18021E3E0
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180221C90 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6_____lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x18021DC8C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6_____lambda_3debc4ca9d8e656fb3713c45e37949b6___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
