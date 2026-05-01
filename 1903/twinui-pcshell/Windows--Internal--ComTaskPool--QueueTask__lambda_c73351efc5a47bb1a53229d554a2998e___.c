/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_c73351efc5a47bb1a53229d554a2998e___ @ 0x180246894
 * Callers:
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802490B4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e_____lambda_c73351efc5a47bb1a53229d554a2998e___ @ 0x180245E7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_c73351efc5a47bb1a53229d554a2998e___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  void *v7; // rax
  unsigned int v8; // edi

  v4 = 0LL;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e_____lambda_c73351efc5a47bb1a53229d554a2998e___(
           (__int64)v7,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
