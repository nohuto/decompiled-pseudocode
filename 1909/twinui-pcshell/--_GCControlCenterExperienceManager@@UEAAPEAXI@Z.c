/*
 * XREFs of ??_GCControlCenterExperienceManager@@UEAAPEAXI@Z @ 0x180198BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180198944 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 */

CControlCenterExperienceManager *__fastcall CControlCenterExperienceManager::`scalar deleting destructor'(
        CControlCenterExperienceManager *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CControlCenterExperienceManager::~CControlCenterExperienceManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
