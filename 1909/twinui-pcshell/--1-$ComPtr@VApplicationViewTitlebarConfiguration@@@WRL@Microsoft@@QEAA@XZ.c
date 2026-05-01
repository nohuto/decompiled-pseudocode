/*
 * XREFs of ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x1801608D8
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__::_1_::dtor$0 @ 0x180090103 (_wil--MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1800E6384 (_CDesktopPositioner--_CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _CloneTitleBarConfiguration_::_1_::dtor$0 @ 0x1800E81C7 (_CloneTitleBarConfiguration_--_1_--dtor$0.c)
 *     _FullScreenPositionerHelpers::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x18018E88A (_FullScreenPositionerHelpers--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
}
