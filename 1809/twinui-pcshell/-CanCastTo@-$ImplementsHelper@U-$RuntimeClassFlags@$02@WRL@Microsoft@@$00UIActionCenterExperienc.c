/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180036334
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BD0 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@789Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180149244 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDis_ea_180149244.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  _DWORD *v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v2, &GUID_dec04b18_357e_41d8_9b71_b991243bea34)
      && !(unsigned int)InlineIsEqualGUID(v5, &GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef) )
    {
      v10 = v8 + 8;
      if ( *v9 == -1738762077
        && v9[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
        && v9[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
        && v9[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
      {
        *v6 = v10;
        return v7;
      }
      v8 += 16LL;
      if ( *v9 != -189734543
        || v9[1] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
        || v9[2] != *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
        || v9[3] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
      {
        v8 = v10 + 16;
        if ( *v9 != -1811144131
          || v9[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
          || v9[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
          || v9[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
        {
          if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
            *v11 = v12 + 8;
          else
            return (unsigned int)-2147467262;
          return v7;
        }
      }
    }
    *v6 = v8;
    return v7;
  }
  *v3 = v4;
  return 0LL;
}
