/*
 * XREFs of ?SubscribeToServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801DCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::SubscribeToServices(
        PenWorkspaceDiscoverBroker *this,
        struct IServiceProvider *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  char *v6; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147467259;
    v4 = 172LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (char *)this + 24;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v3 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         v6);
  if ( v3 < 0 )
  {
    v4 = 173LL;
    goto LABEL_3;
  }
  return 0LL;
}
