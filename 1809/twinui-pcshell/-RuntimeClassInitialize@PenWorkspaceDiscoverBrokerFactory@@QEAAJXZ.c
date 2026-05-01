/*
 * XREFs of ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x180196194
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180193C90 (--$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x180193BD8 (--$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWor.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::RuntimeClassInitialize(PenWorkspaceDiscoverBrokerFactory *this)
{
  PenWorkspaceDiscoverBroker **v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (PenWorkspaceDiscoverBroker **)((char *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBroker,PenWorkspaceDiscoverBroker,>(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
