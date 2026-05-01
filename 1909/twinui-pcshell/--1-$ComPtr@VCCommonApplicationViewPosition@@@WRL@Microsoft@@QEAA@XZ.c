/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x18016BBF0
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x1803BA5AA (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1803BDE8F (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}
