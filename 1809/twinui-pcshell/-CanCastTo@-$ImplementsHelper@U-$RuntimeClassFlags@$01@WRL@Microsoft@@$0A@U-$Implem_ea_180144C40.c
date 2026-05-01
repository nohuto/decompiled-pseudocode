/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180144C40
 * Callers:
 *     ??$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180143EC0 (--$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801408E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1801408E8.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180144BCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenNotificatio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r10d
  _DWORD *v7; // r11
  BOOL IsEqualGUID; // eax
  _QWORD *v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r11

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    if ( *v4 == -267831919
      && v4[1] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data2
      && v4[2] == *(_DWORD *)GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4
      && v4[3] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4[4] )
    {
      *v5 = a1 + 88;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v7, &GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0);
      CanCastTo = 0;
      if ( IsEqualGUID )
        *v9 = v10;
      else
        return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::CanCastTo(
                               v10 + 8,
                               v11);
    }
  }
  return CanCastTo;
}
