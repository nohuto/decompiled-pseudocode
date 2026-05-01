/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801337A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_208f168f51bfbb928939bf261202e971___ @ 0x180132D04 (ShellPositionerHelpers--PerformCallbackOnView__lambda_208f168f51bfbb928939bf261202e971___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(CWinRTApplicationView *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  IUnknown *QueryInterface; // rdi
  volatile int *v9; // rdx
  int v10; // ebx
  CWinRTApplicationView *v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  void **v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v17; // [rsp+88h] [rbp+38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v17);
  v6 = (__int64)v17;
  if ( v17 )
  {
    lpVtbl = v17[6].lpVtbl;
    QueryInterface = (IUnknown *)lpVtbl[30].QueryInterface;
    if ( QueryInterface )
      ((void (__fastcall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **)))QueryInterface->lpVtbl->AddRef)(lpVtbl[30].QueryInterface);
    v18 = 0LL;
    v17 = punk;
    punk = QueryInterface;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v6,
      v9);
  }
  v12 = this;
  v13 = (__int128)*a2;
  v14 = a3;
  v10 = ShellPositionerHelpers::PerformCallbackOnView__lambda_208f168f51bfbb928939bf261202e971___(
          punk,
          (__int64)this,
          &v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFB,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
