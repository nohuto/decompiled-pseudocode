/*
 * XREFs of ?Attach@?$ComPtr@VViewEventArgsForShowAsViewMode@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsViewMode@@@Z @ 0x18026A598
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@W4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAW4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@$$QEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@$$QEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1802671C4 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x180277A5C (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerIn_ea_180277A5C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18026DD00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_18026DD00.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForShowAsViewMode>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v4);
  *a1 = a2;
  return result;
}
