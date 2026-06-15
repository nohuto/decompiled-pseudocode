/*
 * XREFs of ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18010BC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::PauseAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Pause(this[1]);
}
