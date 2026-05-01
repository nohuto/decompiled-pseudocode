/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18020FADC
 * Callers:
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18021AFF8 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18022C330 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x180210F80 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x180213470 (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18021367C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_18021367C.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x180217EF4 (-RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  ViewEventArgsForSwitch *v9; // rax
  int CanCastTo; // edi
  ViewEventArgsForSwitch *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (ViewEventArgsForSwitch *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = ViewEventArgsForSwitch::ViewEventArgsForSwitch(v9);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach(&v17, v11);
    v12 = *a4;
    v13 = v17;
    CanCastTo = ViewEventArgsForSwitch::RuntimeClassInitialize(v17, *a2, *a3, v12, *a5);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v13;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::CanCastTo(
                      v13,
                      v15,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
