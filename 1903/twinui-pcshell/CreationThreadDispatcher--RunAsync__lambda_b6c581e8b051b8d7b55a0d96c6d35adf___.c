/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802DEEF0
 * Callers:
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1802E43C8 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0_____lambda_e0126d03542bc92125754c73e984d3e0___ @ 0x1802DE0B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  void *v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v3 = *a2;
  *a2 = 0LL;
  v9 = v3;
  v10 = *((_BYTE *)a2 + 8);
  v11[0] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0_____lambda_e0126d03542bc92125754c73e984d3e0___(
           (__int64)v4,
           (__int64)&v9);
  v6 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
