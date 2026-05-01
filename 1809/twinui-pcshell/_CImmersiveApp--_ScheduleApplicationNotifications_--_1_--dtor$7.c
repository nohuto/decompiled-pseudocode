/*
 * XREFs of _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$7 @ 0x1800AE080
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 280) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 280) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 56));
  }
}
