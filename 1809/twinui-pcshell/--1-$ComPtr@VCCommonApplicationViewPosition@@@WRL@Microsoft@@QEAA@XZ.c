/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x180123224
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&___ptr64__::_1_::dtor$0 @ 0x180096121 (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-___ptr64__--_1_--.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$3 @ 0x180099EB9 (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}
