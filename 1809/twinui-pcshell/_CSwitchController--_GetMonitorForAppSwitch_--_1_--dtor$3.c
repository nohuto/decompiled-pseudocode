/*
 * XREFs of _CSwitchController::_GetMonitorForAppSwitch_::_1_::dtor$3 @ 0x18032D436
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchController::_GetMonitorForAppSwitch_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 128));
}
