/*
 * XREFs of ?ShutdownServices@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIProfferService@@@Z @ 0x1801FC2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::ShutdownServices(
        PenWorkspaceDiscoverBrokerFactory *this,
        struct IProfferService *a2)
{
  DWORD v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 8);
  if ( v4 )
    CoRevokeClassObject(v4);
  v5 = (*(__int64 (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 56LL))(
         *((_QWORD *)this + 3) + 40LL,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
