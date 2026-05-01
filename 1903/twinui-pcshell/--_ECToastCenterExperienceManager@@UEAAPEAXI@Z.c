/*
 * XREFs of ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x180185240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180184D30 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 */

CToastCenterExperienceManager *__fastcall CToastCenterExperienceManager::`vector deleting destructor'(
        CToastCenterExperienceManager *this,
        char a2)
{
  CToastCenterExperienceManager::~CToastCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D8);
  return this;
}
