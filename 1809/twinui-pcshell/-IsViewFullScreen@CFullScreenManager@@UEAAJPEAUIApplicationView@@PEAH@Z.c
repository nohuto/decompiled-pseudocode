/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800651B0
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180065120 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180144FE0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180145270 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180065268 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPosit.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_86e7f3e0048703c80a8355a209755777___ @ 0x1800652CC (ShellPositionerHelpers--PerformCallbackOnView__lambda_86e7f3e0048703c80a8355a209755777___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2, int *a3)
{
  int v4; // ebx
  __int64 v8; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  *a3 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v8) >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService();
    ShellPositionerHelpers::PerformCallbackOnView__lambda_86e7f3e0048703c80a8355a209755777___(*(this - 9));
    LOBYTE(v4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 3;
    *a3 = v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return 0LL;
}
