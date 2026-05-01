/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18020F88C
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18021B3B0 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001C6DC (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsStandalone@@@Z @ 0x18001C7BC (-Attach@-$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSho.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18001C7F0 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18007008C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        int *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  ViewEventArgsForShowAsStandalone *v12; // rax
  int v13; // edi
  ViewEventArgsForShowAsStandalone *v14; // rax
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (ViewEventArgsForShowAsStandalone *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(v12);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForShowAsStandalone>::Attach(&v18, (__int64)v14);
    v15 = *a4;
    v16 = v18;
    v13 = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(v18, *a2, *a3, v15, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
      v13 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>>(
              v16,
              &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
              a1);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
