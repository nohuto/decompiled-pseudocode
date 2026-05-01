/*
 * XREFs of ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F339C
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1802F0E8C (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802F1CF4 (--1-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1XamlLauncher@@UEAA@XZ @ 0x1802F1E78 (--1XamlLauncher@@UEAA@XZ.c)
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F62F0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F69F0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802F49C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802F49C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::Release(v1);
  }
  return result;
}
