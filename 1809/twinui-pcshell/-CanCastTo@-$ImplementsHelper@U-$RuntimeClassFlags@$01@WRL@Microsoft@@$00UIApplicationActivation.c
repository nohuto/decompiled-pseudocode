/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180058DF8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180037C30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v7; // r8
  __int64 v8; // r10

  if ( *a2 != 646674328
    || a2[1] != *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data2
    || a2[2] != *(_DWORD *)GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4
    || a2[3] != *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4[4] )
  {
    v3 = a1 + 8;
    if ( *a2 == 1629137150
      && a2[1] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data2
      && a2[2] == *(_DWORD *)GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4
      && a2[3] == *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4[4]
      || (v3 += 8LL, *a2 == -1811144131)
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v3 += 8LL, *a2 == -1850735350)
      && a2[1] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data2
      && a2[2] == *(_DWORD *)GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4
      && a2[3] == *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      if ( *a2 != -1509395416
        || a2[1] != *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data2
        || a2[2] != *(_DWORD *)GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4
        || a2[3] != *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4[4] )
      {
        IsEqualGUID = InlineIsEqualGUID(a2, &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee);
        v4 = 0;
        if ( IsEqualGUID )
          *v7 = v8 + 8;
        else
          return (unsigned int)-2147467262;
        return v4;
      }
      *a3 = v3 + 8;
    }
    return 0;
  }
  *a3 = a1;
  return 0LL;
}
