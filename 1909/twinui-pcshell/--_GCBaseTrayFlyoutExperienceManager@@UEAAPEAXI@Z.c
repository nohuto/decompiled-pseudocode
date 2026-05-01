/*
 * XREFs of ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x180097620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180097080 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::`scalar deleting destructor'(
        CBaseTrayFlyoutExperienceManager *this,
        char a2)
{
  CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}
