/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@W4ViewGrouping@896@PEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x18029F6D8
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x180296F4C (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerIn_ea_180296F4C.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18001A980 (--4-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_ex.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  *(_DWORD *)(a1 + 48) = 14;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 56), 0LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 104), a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 112), a3);
  *(_DWORD *)(a1 + 124) = a5;
  *(_DWORD *)(a1 + 128) = a6;
  *(_DWORD *)(a1 + 132) = a7;
  *(_DWORD *)(a1 + 136) = a9;
  *(_DWORD *)(a1 + 120) = a4;
  *(_QWORD *)(a1 + 140) = a8;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 152), a10);
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 160),
    a11);
  return 0LL;
}
