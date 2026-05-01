/*
 * XREFs of ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B12A0
 * Callers:
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$2 @ 0x1801B85E1 (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x180220632 (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(a1);
}
