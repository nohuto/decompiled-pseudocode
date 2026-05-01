/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x18001A73C
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180018760 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x18001A88C (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsStandalone@@@Z @ 0x18001A9BC (-Attach@-$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSho.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18001AA9C (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180076DD0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWindowingEnironmentSettingsArgsForImplicitEvent@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007B79C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWindowingEnironmentSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
        void **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  ViewEventArgsForShowAsStandalone *v13; // rax
  ViewEventArgsForShowAsStandalone *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  int CanCastTo; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  const struct _GUID *v27; // rdx
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // rcx
  char *v32; // r8
  __int64 v33; // r9
  char *v34; // r8
  __int64 v35; // r10
  __int64 v36; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (ViewEventArgsForShowAsStandalone *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v13 )
    return (unsigned int)-2147024882;
  v14 = ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(v13);
  v36 = 0LL;
  Microsoft::WRL::ComPtr<ViewEventArgsForShowAsStandalone>::Attach(&v36, v14);
  v15 = *a4;
  v16 = v36;
  CanCastTo = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(v36, *a2, *a3, v15, *a5, *a6, *a7, *a8, *a9);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !(unsigned int)InlineIsEqualGUID(
                          &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                          &GUID_00000000_0000_0000_c000_000000000046,
                          v18,
                          v19)
      && !(unsigned int)InlineIsEqualGUID(v20, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v21, v22) )
    {
      if ( (unsigned int)InlineIsEqualGUID(v23, v26, v24, v25) )
      {
        *a1 = (void *)v16;
LABEL_7:
        CanCastTo = 0;
        goto LABEL_8;
      }
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v16 + 8), v27, a1);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      if ( CanCastTo == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v30, &GUID_00000038_0000_0000_c000_000000000046, v16 + 64, v29) )
        {
          *a1 = v32;
          CanCastTo = 0;
LABEL_9:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
          goto LABEL_10;
        }
        if ( (unsigned int)InlineIsEqualGUID(v31, &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49, v32 + 8, v33) )
        {
          *a1 = v34;
          goto LABEL_7;
        }
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::CanCastTo(
                      v34 + 8,
                      v35,
                      a1);
      }
LABEL_8:
      if ( CanCastTo < 0 )
        goto LABEL_10;
      goto LABEL_9;
    }
    *a1 = (void *)v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    CanCastTo = 0;
  }
LABEL_10:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v16);
  return (unsigned int)CanCastTo;
}
