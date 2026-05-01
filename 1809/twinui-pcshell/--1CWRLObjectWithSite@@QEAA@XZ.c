/*
 * XREFs of ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x1802981C0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1802B81A0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802E1B40 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIExecuteCommand.c)
 *     ??_GAllUpViewUriHandler@@UEAAPEAXI@Z @ 0x1802E1B80 (--_GAllUpViewUriHandler@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802E27F0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIAppResizeView@.c)
 *     ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x1802E2870 (--_ECAllUpViewService@@UEAAPEAXI@Z.c)
 *     ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x1802E3070 (--_GCPPIAllUpViewService@@UEAAPEAXI@Z.c)
 *     ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x180328E20 (--_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??_ECAppTransitionTargetManager@@UEAAPEAXI@Z @ 0x180328E60 (--_ECAppTransitionTargetManager@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803549C0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UITabletModeChro.c)
 *     ??_GChromeManager@@UEAAPEAXI@Z @ 0x180354A00 (--_GChromeManager@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UITabletModePositionerOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803558D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCA_ea_1803558D0.c)
 *     ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x180355920 (--_GTabletModePositionerOperation@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18035AC84 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIWindowArrangementView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@UIDragVisualHost@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18035AF50 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIWindowArrangem.c)
 *     ??_EAppResizeView@@UEAAPEAXI@Z @ 0x18035FB30 (--_EAppResizeView@@UEAAPEAXI@Z.c)
 *     ??_GJointDivider@@UEAAPEAXI@Z @ 0x180363B70 (--_GJointDivider@@UEAAPEAXI@Z.c)
 *     ??_EDragData@@UEAAPEAXI@Z @ 0x180364AE0 (--_EDragData@@UEAAPEAXI@Z.c)
 *     ??_GAppResizeData@@UEAAPEAXI@Z @ 0x1803674A0 (--_GAppResizeData@@UEAAPEAXI@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x18036ECD8 (--1CDropFeedback@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18036ED80 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UI.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180371648 (--1CDragVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWRLObjectWithSite::~CWRLObjectWithSite(CWRLObjectWithSite *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
