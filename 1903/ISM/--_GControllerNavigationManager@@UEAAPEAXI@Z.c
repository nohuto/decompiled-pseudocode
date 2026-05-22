/*
 * XREFs of ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x180072580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x180072358 (--1ControllerNavigationManager@@UEAA@XZ.c)
 */

ControllerNavigationManager *__fastcall ControllerNavigationManager::`scalar deleting destructor'(
        ControllerNavigationManager *this,
        char a2)
{
  ControllerNavigationManager::~ControllerNavigationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
