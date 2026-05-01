/*
 * XREFs of _MonitorFrame::MonitorFrame_::_1_::dtor$1 @ 0x1802C2532
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MonitorFrame::MonitorFrame_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(*(_QWORD *)(a2 + 64) + 40LL));
}
