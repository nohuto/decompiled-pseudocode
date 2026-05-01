/*
 * XREFs of ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x180225774
 * Callers:
 *     ??_EWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x1800A2440 (--_EWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x180225098 (--1WindowEventDispatcher@@UEAA@XZ.c)
 */

WindowEventDispatcher *__fastcall WindowEventDispatcher::`vector deleting destructor'(
        WindowEventDispatcher *this,
        char a2)
{
  WindowEventDispatcher::~WindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
