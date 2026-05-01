/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802A9FD4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64_IImmersiveShellHookService_____ptr64_&___ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64_std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor$0 @ 0x1802A8A9C (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplication.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1 @ 0x1802AB361 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1_0 @ 0x1802AB539 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
}
