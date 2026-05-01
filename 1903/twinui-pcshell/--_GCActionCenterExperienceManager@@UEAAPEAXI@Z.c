/*
 * XREFs of ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x1801752E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180174C68 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 */

CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::`scalar deleting destructor'(
        CActionCenterExperienceManager *this,
        char a2)
{
  CActionCenterExperienceManager::~CActionCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x248);
  return this;
}
