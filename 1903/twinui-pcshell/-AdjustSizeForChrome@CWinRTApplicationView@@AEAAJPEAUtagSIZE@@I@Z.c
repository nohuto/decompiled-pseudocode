/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18015CAA4
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18015D4D0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x1801591C8 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v12[2]; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = (__int64 *)-2LL;
  v16 = 0LL;
  v14[0] = &v16;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v13);
  v6 = v13;
  if ( v13 )
  {
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v14, (__int64)v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v6);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, int *))(*(_QWORD *)v16 + 40LL))(
         v16,
         *a2,
         a3,
         this,
         v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = MulDiv(a2->cx, a3, 96);
    v10 = MulDiv(a2->cy, a3, 96);
    LODWORD(v13) = v12[0] + a2->cx - v9;
    HIDWORD(v13) = v12[1] + a2->cy - v10;
    *a2 = (struct tagSIZE)v13;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v8;
}
