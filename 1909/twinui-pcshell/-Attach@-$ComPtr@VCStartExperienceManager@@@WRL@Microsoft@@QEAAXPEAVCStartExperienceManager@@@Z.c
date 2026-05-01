/*
 * XREFs of ?Attach@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAAXPEAVCStartExperienceManager@@@Z @ 0x1801B62E4
 * Callers:
 *     ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x1801B50E0 (--$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStartExperienceManag.c)
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B52A8 (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800706D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(v4);
  *a1 = a2;
  return result;
}
