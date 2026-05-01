/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x18032F618
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication_____ptr64_&___ptr64_IUnknown_____ptr64_&___ptr64_enum_ACTIVATEOPTIONSINTERNAL_&___ptr64__::_1_::dtor$2 @ 0x18032F134 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18032F134.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_unsigned_short_const_____ptr64_&___ptr64_unsigned_short_const_____ptr64_&___ptr64_unsigned_short_const_____ptr64_&___ptr64_IUnknown_____ptr64_&___ptr64_enum_ACTIVATEOPTIONSINTERNAL_&___ptr64__::_1_::dtor$2 @ 0x18032F228 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18032F228.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x18032FC59 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0_0 @ 0x18032FD8E (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1);
}
