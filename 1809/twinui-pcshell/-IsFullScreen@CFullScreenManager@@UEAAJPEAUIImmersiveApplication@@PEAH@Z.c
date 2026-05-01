/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180065120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800651B0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800658D8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(IUnknown **this, struct IUnknown *a2, int *a3)
{
  struct IApplicationView **v6; // r9
  int ViewForApplication; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)&v12,
                         v6);
  v8 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v10 = 286LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
    goto LABEL_4;
  }
  ViewForApplication = CFullScreenManager::IsViewFullScreen((CFullScreenManager *)this, v12, a3);
  v8 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    v10 = 287LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v8;
}
