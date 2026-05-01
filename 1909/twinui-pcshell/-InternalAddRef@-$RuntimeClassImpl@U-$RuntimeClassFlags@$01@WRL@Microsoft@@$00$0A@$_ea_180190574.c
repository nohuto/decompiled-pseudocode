/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180190574
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18018FA20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18018FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IShellPositionerManager,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler,IShellPositionerPresentationRequestedHandler>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 140), a2);
}
