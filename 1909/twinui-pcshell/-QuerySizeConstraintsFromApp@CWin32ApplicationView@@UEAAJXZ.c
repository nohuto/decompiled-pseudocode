/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800569A0
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180056914 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x180056A28 (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  struct IApplicationView *v2; // rdx
  __int64 v3; // rbx
  volatile int *v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 WindowForView; // rax
  _QWORD *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  _QWORD **v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v11 = &v9;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
  v3 = v10;
  if ( v10 )
  {
    lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(&v11, v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v3,
      v4);
  }
  v5 = v9;
  v6 = *v9;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v2);
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v6 + 24))(v5, WindowForView);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)v5;
}
