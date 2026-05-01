/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x18011F294
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$17 @ 0x18032C493 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$17.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18035F11C (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1803689F4 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180370B30 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAll.c)
 *     ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x180370B90 (--_ECPPIAllUpViewHost@@UEAAPEAXI@Z.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1803A5E24 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1803BFABC (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1803DADB0 (--_GTabletModePositionerOperation@@UEAAPEAXI@Z.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x18041F372 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
