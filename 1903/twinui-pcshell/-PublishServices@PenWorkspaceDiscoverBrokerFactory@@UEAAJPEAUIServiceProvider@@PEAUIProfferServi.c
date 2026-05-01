/*
 * XREFs of ?PublishServices@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801DC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::PublishServices(
        LPUNKNOWN pUnk,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CoRegisterClassObject(&CLSID_PenWorkspaceDiscoverBroker, pUnk, 4u, 1u, (LPDWORD)&pUnk[4]);
  if ( v6 < 0 )
  {
    v7 = 213LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*((__int64 (__fastcall **)(ULONG (__stdcall **)(IUnknown *), struct IServiceProvider *, struct IProfferService *))pUnk[3].lpVtbl[1].Release
        + 3))(
         &pUnk[3].lpVtbl[1].Release,
         a2,
         a3);
  if ( v6 < 0 )
  {
    v7 = 214LL;
    goto LABEL_3;
  }
  return 0LL;
}
