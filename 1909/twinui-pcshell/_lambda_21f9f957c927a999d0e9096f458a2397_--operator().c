/*
 * XREFs of _lambda_21f9f957c927a999d0e9096f458a2397_::operator() @ 0x18024A398
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21f9f957c927a999d0e9096f458a2397___::Run @ 0x180256B10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_21f9f957c927a999d0e9096f458a2397___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180160640 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801628D0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025F30C (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 */

__int64 __fastcall lambda_21f9f957c927a999d0e9096f458a2397_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _BYTE v4[24]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  TryGetApplicationViewTabManager(&v7, *a1, "NotifyGroupChanged");
  v1 = v7;
  if ( v7 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v4, 0);
    v5 = v1;
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD52,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v4);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
