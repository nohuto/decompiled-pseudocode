/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065450
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ff74802286da7733b76df6a3bea32e5e___ @ 0x180065524 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ff74802286da7733b76df6a3bea32e5e___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  IUnknown *QueryInterface; // rsi
  volatile int *v7; // rdx
  int v8; // ebx
  IUnknown *punk; // [rsp+90h] [rbp+40h] BYREF
  IUnknown *v11; // [rsp+98h] [rbp+48h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0;
  *a3 = 0LL;
  punk = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v11);
  v4 = (__int64)v11;
  if ( v11 )
  {
    lpVtbl = v11[6].lpVtbl;
    QueryInterface = (IUnknown *)lpVtbl[30].QueryInterface;
    if ( QueryInterface )
      ((void (__fastcall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **)))QueryInterface->lpVtbl->AddRef)(lpVtbl[30].QueryInterface);
    v12 = 0LL;
    v11 = punk;
    punk = QueryInterface;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v4,
      v7);
  }
  v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ff74802286da7733b76df6a3bea32e5e___(punk);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
