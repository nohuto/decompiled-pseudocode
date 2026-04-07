/*
 * XREFs of ?Unlock@CWindowList@@UEAAXXZ @ 0x180092BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::Unlock(CWindowList *this)
{
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
