/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x1802B4FF8
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z @ 0x1800A7640 (--_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1802B4B20 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::`scalar deleting destructor'(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x328);
  return this;
}
