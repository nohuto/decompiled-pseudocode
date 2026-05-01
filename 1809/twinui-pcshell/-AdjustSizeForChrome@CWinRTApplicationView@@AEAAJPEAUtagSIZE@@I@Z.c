/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180133054
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180133B10 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18012F748 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v13[1] = (__int64 *)-2LL;
  v15 = 0LL;
  v13[0] = &v15;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v11);
  if ( v11 )
    lambda_93f12587be75daec396af0a75fadd596_::operator()(v13, v11);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v11);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, int *))(*(_QWORD *)v15 + 40LL))(
         v15,
         *a2,
         a3,
         this,
         v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = MulDiv(a2->cx, a3, 96);
    v9 = MulDiv(a2->cy, a3, 96);
    LODWORD(v11) = v12[0] + a2->cx - v8;
    HIDWORD(v11) = a2->cy + v12[1] - v9;
    *a2 = (struct tagSIZE)v11;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v7;
}
