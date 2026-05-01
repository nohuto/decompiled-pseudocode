/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18001C5EC
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180019BBC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001C6DC (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsStandalone@@@Z @ 0x18001C7BC (-Attach@-$ComPtr@VViewEventArgsForShowAsStandalone@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSho.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18001C7F0 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18007008C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  ViewEventArgsForShowAsStandalone *v12; // rax
  ViewEventArgsForShowAsStandalone *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // edi
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (ViewEventArgsForShowAsStandalone *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(v12);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForShowAsStandalone>::Attach(&v18, v13);
    v14 = *a4;
    v15 = v18;
    v16 = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(v18, *a2, *a3, v14, *a5, *a6, *a7, *a8);
    if ( v16 >= 0 )
      v16 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>>(
              v15,
              &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
              a1);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v16;
}
