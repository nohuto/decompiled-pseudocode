/*
 * XREFs of ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x1802A9FE0
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802A8B41 (_wil--MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView_____ptr64_-___ptr64_IApplicat.c)
 *     _AppViewIconFactory::CreateInstance_::_1_::dtor$0 @ 0x1802ABA45 (_AppViewIconFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(a1);
}
