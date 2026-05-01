/*
 * XREFs of ??_ECScreenClippingExperienceManager@@EEAAPEAXI@Z @ 0x1801CB3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801CAEF8 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 */

CScreenClippingExperienceManager *__fastcall CScreenClippingExperienceManager::`vector deleting destructor'(
        CScreenClippingExperienceManager *this,
        char a2)
{
  CScreenClippingExperienceManager::~CScreenClippingExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D8);
  return this;
}
