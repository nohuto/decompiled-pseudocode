/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180331524
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x180333970 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___ @ 0x180330BC4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        __int128 *a2)
{
  void *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v7 = *((_QWORD *)a2 + 2);
  v8 = a1;
  v6 = *a2;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  if ( v2 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___(
           (__int64)v2,
           (__int64)&v6);
  v4 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v3, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v9);
  return v4;
}
