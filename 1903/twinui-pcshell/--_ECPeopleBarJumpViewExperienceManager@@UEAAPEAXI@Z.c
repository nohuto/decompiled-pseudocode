/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1801922A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801921B4 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(
        CPeopleBarJumpViewExperienceManager *this,
        char a2)
{
  CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
