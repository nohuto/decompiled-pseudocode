/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037D40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C5D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009C5D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C5E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009C5E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C5F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009C5F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C600 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009C600.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C610 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009C610.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180039A6C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIProjectionViewHelper@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 **a3)
{
  int CanCastTo; // ebx
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 *v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rax

  CanCastTo = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = v6;
    v11 = *v6;
    goto LABEL_9;
  }
  if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *a3 = v8;
LABEL_8:
    v11 = **a3;
LABEL_9:
    (*(void (**)(void))(v11 + 8))();
    return (unsigned int)CanCastTo;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *a3 = v9;
  }
  else if ( *v10 == -124057211
         && v10[1] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data2
         && v10[2] == *(_DWORD *)GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4
         && v10[3] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4[4]
         || *v10 == -132485016
         && v10[1] == *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data2
         && v10[2] == *(_DWORD *)GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4
         && v10[3] == *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4[4] )
  {
    *a3 = v9 + 4;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification>::CanCastTo(
                  v9 + 5,
                  v10,
                  a3);
  }
  if ( CanCastTo >= 0 )
    goto LABEL_8;
  return (unsigned int)CanCastTo;
}
