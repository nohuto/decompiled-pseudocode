/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180022DCC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023480 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExpe.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@67@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@67@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CEDF8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801CEDF8.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int IsEqualGUID; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // r10
  __int64 v16; // r11

  if ( *a2 == -1924325694
    && a2[1] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
    && a2[2] == *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
    && a2[3] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == -189734543
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      *a3 = v3;
      LODWORD(a3) = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf, a3, a2);
      LODWORD(a3) = 0;
      if ( IsEqualGUID
        || (unsigned int)InlineIsEqualGUID(v5, &GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7, 0LL, v6)
        || (unsigned int)InlineIsEqualGUID(v9, &GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e, a3, v10)
        || (unsigned int)InlineIsEqualGUID(v11, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, a3, v12) )
      {
        *v7 = v8;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9, a3, v14) )
      {
        *v15 = v16 + 8;
      }
      else
      {
        LODWORD(a3) = -2147467262;
      }
    }
    return (unsigned int)a3;
  }
}
