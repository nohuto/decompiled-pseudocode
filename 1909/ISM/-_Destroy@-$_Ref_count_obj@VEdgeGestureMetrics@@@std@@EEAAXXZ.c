/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x180102B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj<EdgeGestureMetrics>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)(a1 + 16));
}
