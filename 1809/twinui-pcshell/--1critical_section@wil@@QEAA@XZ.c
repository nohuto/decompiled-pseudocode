/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x1800DE490
 * Callers:
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x1802DE844 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1802E8874 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F0870 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAll.c)
 *     ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x1802F08D0 (--_ECPPIAllUpViewHost@@UEAAPEAXI@Z.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x180325F34 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x18033B828 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x180355920 (--_GTabletModePositionerOperation@@UEAAPEAXI@Z.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x18039A4C9 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
