/*
 * XREFs of ??_GCStartExperienceManager@@UEAAPEAXI@Z @ 0x1801B6200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801B6008 (--1CStartExperienceManager@@UEAA@XZ.c)
 */

CStartExperienceManager *__fastcall CStartExperienceManager::`scalar deleting destructor'(
        CStartExperienceManager *this,
        char a2)
{
  CStartExperienceManager::~CStartExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x290);
  return this;
}
