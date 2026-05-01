/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800146F8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180014684 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CB6E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_1801CB6E8.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f, a3, a1) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>::CanCastTo(
             v4 + 8,
             v5);
  *v3 = v4;
  return 0LL;
}
