/*
 * XREFs of ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180107BC4
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A1650 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponen.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D3F48 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801D3F48.c)
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1801D3F94 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x1803B8A60 (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180107B88 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(
        CImmersiveShellComponentWithGITSite *this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
