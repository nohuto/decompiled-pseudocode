/*
 * XREFs of ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x1801DAC44
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z @ 0x1800D8410 (--_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801DA4D4 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 */

CortanaStoreAppExperienceManager *__fastcall CortanaStoreAppExperienceManager::`vector deleting destructor'(
        CortanaStoreAppExperienceManager *this,
        char a2)
{
  CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x190);
  return this;
}
