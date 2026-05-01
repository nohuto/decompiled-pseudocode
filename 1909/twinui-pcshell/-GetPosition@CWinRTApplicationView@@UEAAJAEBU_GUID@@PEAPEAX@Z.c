/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017C480
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18006994C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___ @ 0x18017BA00 (ShellPositionerHelpers--PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(CWinRTApplicationView *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rbx
  volatile int *v7; // rdx
  int v8; // ebx
  CWinRTApplicationView *v10; // [rsp+28h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h]
  void **v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  IUnknown **p_punk; // [rsp+90h] [rbp+40h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v15);
  v6 = v15;
  if ( v15 )
  {
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&p_punk, v15);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v6,
      v7);
  }
  v10 = this;
  v11 = (__int128)*a2;
  v12 = a3;
  v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___(
         punk,
         (__int64)this,
         &v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFB,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
