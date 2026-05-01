/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180067430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800674C0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180067C28 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(ApplicationViewHelpers **this, struct IUnknown *a2, int *a3)
{
  struct IApplicationView **v6; // r9
  int ViewForApplication; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)&v13,
                         v6);
  v8 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v10 = 286LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication,
      v11);
    goto LABEL_4;
  }
  ViewForApplication = CFullScreenManager::IsViewFullScreen((CFullScreenManager *)this, v13, a3);
  v8 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v10 = 287LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v8;
}
