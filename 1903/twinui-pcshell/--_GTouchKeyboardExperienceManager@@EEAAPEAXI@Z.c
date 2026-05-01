/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18030DC18
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z @ 0x1800BE4F0 (--_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18030D5B4 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::`scalar deleting destructor'(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3A0);
  return this;
}
