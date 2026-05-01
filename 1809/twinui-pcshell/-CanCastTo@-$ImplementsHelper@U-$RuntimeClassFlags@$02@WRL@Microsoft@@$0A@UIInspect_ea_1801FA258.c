/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIViewGroupManagerInternal@@UIViewGroupManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UITitleBarRecovery@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801FA258
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupManagerInternal@@UIViewGroupManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FAF40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801FAF40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITitleBarRecovery@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801FA1EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITitleBarRecovery@@UIW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IViewGroupManagerInternal,IViewGroupManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,ITitleBarRecovery,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v6; // rbx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  unsigned int v9; // r9d
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  _DWORD *v12; // r10
  __int64 v13; // r11

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    v6 = v4 + 8;
    if ( InlineIsEqualGUID(v2, &GUID_5ab678f6_11bb_458e_a6cd_4677fc249418)
      || InlineIsEqualGUID(v7, &GUID_a3cb2b3f_c023_43b8_b653_dae62e5d786e) )
    {
      *v8 = v6;
    }
    else if ( InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v11 = v13;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITitleBarRecovery,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                             v13 + 8,
                             v12);
    }
    return v9;
  }
}
