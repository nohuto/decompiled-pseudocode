/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029B60
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800230E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800230E0.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180041800 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802F2318 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1802F2318.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _QWORD *v9; // r10
  __int64 v10; // r11

  if ( *a2 == 1260763374
    && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
    && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
    && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    if ( *a2 == 1834041537
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = a1 + 8;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4);
      v8 = 0;
      if ( IsEqualGUID
        || (v7 += 8LL, *v5 == 1593280783)
        && v5[1] == *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data2
        && v5[2] == *(_DWORD *)GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4
        && v5[3] == *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4[4]
        || (v7 += 8LL, *v5 == 1201492897)
        && v5[1] == *(_DWORD *)&GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data2
        && v5[2] == *(_DWORD *)GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data4
        && v5[3] == *(_DWORD *)&GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data4[4] )
      {
        *v6 = v7;
      }
      else if ( InlineIsEqualGUID(v4, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
      {
        *v9 = v10 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    return v8;
  }
}
