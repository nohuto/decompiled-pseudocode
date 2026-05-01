/*
 * XREFs of ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18034010C
 * Callers:
 *     ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18033D430 (--1-$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18033D9B4 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18034931C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18034BDF8 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x180351648 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ??$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFactory@@@Z @ 0x180371E00 (--$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFacto.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180371F68 (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18037395C (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Deta.c)
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180373A9C (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEA.c)
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x1803D9A44 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803D9C50 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180411760 (--$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804118E8 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
