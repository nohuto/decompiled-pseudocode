/*
 * XREFs of _AudioStateMonitorManager::RecalculateVolume_::_1_::dtor$1 @ 0x180039D83
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioStateMonitorManager::RecalculateVolume_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>::~unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>((void **)(a2 + 120));
}
