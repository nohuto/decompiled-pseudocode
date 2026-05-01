/*
 * XREFs of ??_EVirtualDesktopAcessibility@@UEAAPEAXI@Z @ 0x18038CD50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAcessibility@@UEAA@XZ @ 0x18038CC68 (--1VirtualDesktopAcessibility@@UEAA@XZ.c)
 */

VirtualDesktopAcessibility *__fastcall VirtualDesktopAcessibility::`vector deleting destructor'(
        VirtualDesktopAcessibility *this,
        char a2)
{
  VirtualDesktopAcessibility::~VirtualDesktopAcessibility(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
