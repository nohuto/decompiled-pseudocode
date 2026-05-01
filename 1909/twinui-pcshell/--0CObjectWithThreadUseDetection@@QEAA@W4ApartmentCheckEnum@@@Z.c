/*
 * XREFs of ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x18012CD70
 * Callers:
 *     ??0CApplicationManager@@QEAA@XZ @ 0x18012C89C (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x18014597C (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x180148440 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180159BD4 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180172950 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ??0?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ @ 0x1802E1098 (--0-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x1802F6574 (--0-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802FB64C (--0-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18035EE98 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x18036888C (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180370970 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x1803A5C08 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1803BF908 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0DesktopOperation@@QEAA@XZ @ 0x1803C618C (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x1803DACF0 (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x1803DC110 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x1803DCB5C (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x1803DD5B0 (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x1803DDA84 (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x1803DEF8C (--0PPILayoutOperation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = -2;
  *(_DWORD *)(a1 + 44) = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)a1);
  return a1;
}
