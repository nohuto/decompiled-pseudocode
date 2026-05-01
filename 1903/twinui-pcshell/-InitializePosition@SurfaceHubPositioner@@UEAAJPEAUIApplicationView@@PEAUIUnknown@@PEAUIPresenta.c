/*
 * XREFs of ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803992B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180039338 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18003AE00 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039A28C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::InitializePosition(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  unsigned int DetailsForActivation; // ebx
  __int64 v7; // rdx
  bool v8; // di
  struct IImmersiveApplication **v9; // r8
  int ApplicationFromView; // eax
  __int64 v11; // rdx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v15; // [rsp+40h] [rbp+8h] BYREF

  v13[1] = -2LL;
  if ( *((_BYTE *)this + 464) )
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             this,
                             (struct IApplicationView *)a3,
                             &v15,
                             0LL);
    if ( (DetailsForActivation & 0x80000000) != 0 )
    {
      v7 = 287LL;
      goto LABEL_3;
    }
    v8 = 1;
    if ( ((__int64)v15.lpVtbl & 1) != 0 || ((__int64)v15.lpVtbl & 2) != 0 )
      v8 = 0;
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)v13, v9);
    DetailsForActivation = ApplicationFromView;
    if ( ApplicationFromView >= 0 )
    {
      ApplicationFromView = SurfaceHubPositioner::_SetDefaultLayout(
                              (SurfaceHubPositioner *)((char *)this - 112),
                              (struct IApplicationView *)a2,
                              v8);
      DetailsForActivation = ApplicationFromView;
      if ( ApplicationFromView >= 0 )
      {
        DetailsForActivation = 0;
        goto LABEL_15;
      }
      v11 = 295LL;
    }
    else
    {
      v11 = 293LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)ApplicationFromView);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    return DetailsForActivation;
  }
  DetailsForActivation = -2147418113;
  v7 = 285LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)DetailsForActivation);
  return DetailsForActivation;
}
