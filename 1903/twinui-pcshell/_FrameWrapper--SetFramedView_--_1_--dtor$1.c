/*
 * XREFs of _FrameWrapper::SetFramedView_::_1_::dtor$1 @ 0x18014D665
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FrameWrapper::SetFramedView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 112));
}
