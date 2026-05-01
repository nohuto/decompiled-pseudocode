/*
 * XREFs of ?UnsubscribeFromServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801963B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::UnsubscribeFromServices(
        PenWorkspaceDiscoverBroker *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // r10
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    v3 = -2147418113;
    v4 = 186LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 104LL))(
         *((_QWORD *)this + 3),
         ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64));
  if ( v3 < 0 )
  {
    v4 = 187LL;
    goto LABEL_3;
  }
  return 0LL;
}
