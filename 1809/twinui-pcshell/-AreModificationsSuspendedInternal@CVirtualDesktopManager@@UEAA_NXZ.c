/*
 * XREFs of ?AreModificationsSuspendedInternal@CVirtualDesktopManager@@UEAA_NXZ @ 0x180385940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopManager::AreModificationsSuspendedInternal(CVirtualDesktopManager *this)
{
  return *((_DWORD *)this + 36) != 0;
}
