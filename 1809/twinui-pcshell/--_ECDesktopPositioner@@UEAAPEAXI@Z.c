/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x18033C440
 * Callers:
 *     ??_ECDesktopPositioner@@WCI@EAAPEAXI@Z @ 0x1800A96F0 (--_ECDesktopPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x18033BA20 (--1CDesktopPositioner@@UEAA@XZ.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x198);
  return this;
}
