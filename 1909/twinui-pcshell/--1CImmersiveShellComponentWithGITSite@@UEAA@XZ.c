/*
 * XREFs of ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180126BD4
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800AFF84 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponen.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801F35E8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801F35E8.c)
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1801F3634 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x1803D7F70 (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180126B98 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(
        CImmersiveShellComponentWithGITSite *this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
