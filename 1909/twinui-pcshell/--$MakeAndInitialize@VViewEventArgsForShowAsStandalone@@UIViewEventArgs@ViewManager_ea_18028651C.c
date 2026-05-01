/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18028651C
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180290380 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsStandalone@@@Z @ 0x18001A9BC (-Attach@-$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSho.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18001AA9C (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180076DD0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWindowingEnironmentSettingsArgsForImplicitEvent@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007B79C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWindowingEnironmentSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18028D6B4 (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@Vie_ea_18028D6B4.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
        void **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  ViewEventArgsForShowAsStandalone *v12; // rax
  int CanCastTo; // edi
  ViewEventArgsForShowAsStandalone *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  _DWORD *v19; // r10
  const struct _GUID *v20; // rdx
  _DWORD *v21; // r10
  _DWORD *v22; // rcx
  void *v23; // r8
  void *v24; // r8
  _DWORD *v25; // r10
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (ViewEventArgsForShowAsStandalone *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v12 )
    return (unsigned int)-2147024882;
  v14 = ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(v12);
  v27 = 0LL;
  Microsoft::WRL::ComPtr<ViewEventArgsForShowAsStandalone>::Attach(&v27, (__int64)v14);
  v15 = *a4;
  v16 = v27;
  CanCastTo = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(v27, *a2, *a3, v15, *a5, *a6, *a7, *a8);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
      && !InlineIsEqualGUID(v17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      if ( InlineIsEqualGUID(v18, v19) )
      {
        *a1 = (void *)v16;
LABEL_8:
        CanCastTo = 0;
        goto LABEL_17;
      }
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v16 + 8), v20, a1);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(v21, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          *a1 = v23;
          CanCastTo = 0;
LABEL_18:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
          goto LABEL_20;
        }
        if ( InlineIsEqualGUID(v22, &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49) )
        {
          *a1 = v24;
          goto LABEL_8;
        }
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::CanCastTo(
                      (__int64)v24 + 8,
                      v25);
      }
LABEL_17:
      if ( CanCastTo < 0 )
        goto LABEL_20;
      goto LABEL_18;
    }
    *a1 = (void *)v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    CanCastTo = 0;
  }
LABEL_20:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v16);
  return (unsigned int)CanCastTo;
}
