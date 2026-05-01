/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017E6B8
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18017C6F0 (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x18017D1A8 (--1-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180180E2C (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x180300DA4 (--$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Inte.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1803011A8 (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 *     ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x180303BC0 (-CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Interna.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FD20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImm_ea_18017FD20.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v1);
  }
  return result;
}
