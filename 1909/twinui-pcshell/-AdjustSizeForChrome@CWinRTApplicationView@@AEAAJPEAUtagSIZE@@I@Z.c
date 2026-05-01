/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18017BD54
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18017C780 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x180178448 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  volatile int *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v15[1] = (__int64 *)-2LL;
  v17 = 0LL;
  v15[0] = &v17;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v14);
  v6 = v14;
  if ( v14 )
  {
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v15, v14);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v6,
      v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, int *))(*(_QWORD *)v17 + 40LL))(
         v17,
         *a2,
         a3,
         this,
         v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = MulDiv(a2->cx, a3, 96);
    v11 = MulDiv(a2->cy, a3, 96);
    LODWORD(v14) = v13[0] + a2->cx - v10;
    HIDWORD(v14) = v13[1] + a2->cy - v11;
    *a2 = (struct tagSIZE)v14;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
