/*
 * XREFs of ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x18009EB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall VirtualDesktopDataSource::Release(__int64 a1)
{
  return CToastCenterExperienceManager::Release((CToastCenterExperienceManager *)(a1 - 8));
}
