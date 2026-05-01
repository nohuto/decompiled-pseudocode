/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AF1DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x1803AEE78 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_1803AEE78.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_unsigned_short_const___&_unsigned_short_const___&_unsigned_short_const___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x1803AEF6C (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_1803AEF6C.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x1803AF759 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0_0 @ 0x1803AF88E (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1);
}
