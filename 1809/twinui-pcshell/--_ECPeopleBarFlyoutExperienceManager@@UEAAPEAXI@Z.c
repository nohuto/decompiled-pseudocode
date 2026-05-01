/*
 * XREFs of ??_ECPeopleBarFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x180162370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180161DD8 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 */

CPeopleBarFlyoutExperienceManager *__fastcall CPeopleBarFlyoutExperienceManager::`vector deleting destructor'(
        CPeopleBarFlyoutExperienceManager *this,
        char a2)
{
  CPeopleBarFlyoutExperienceManager::~CPeopleBarFlyoutExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2B0);
  return this;
}
