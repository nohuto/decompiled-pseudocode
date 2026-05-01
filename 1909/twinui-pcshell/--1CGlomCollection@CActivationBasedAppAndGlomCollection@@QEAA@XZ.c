/*
 * XREFs of ??1CGlomCollection@CActivationBasedAppAndGlomCollection@@QEAA@XZ @ 0x18012D9B0
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::PositionNewCreatedApp_::_1_::dtor$0 @ 0x1800E4D64 (_CActivationBasedAppAndGlomCollection--PositionNewCreatedApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CActivationBasedAppAndGlomCollection::CGlomCollection::~CGlomCollection(__int64 this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(this);
}
