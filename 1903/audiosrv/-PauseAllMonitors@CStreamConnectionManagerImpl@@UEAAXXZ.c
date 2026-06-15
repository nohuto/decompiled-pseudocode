/*
 * XREFs of ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18010C140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::PauseAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Pause(this[1]);
}
