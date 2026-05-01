/*
 * XREFs of ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x18039B984
 * Callers:
 *     ??_EKioskPositioner@@WCI@EAAPEAXI@Z @ 0x1800C0370 (--_EKioskPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x18039B5F8 (--1KioskPositioner@@UEAA@XZ.c)
 */

KioskPositioner *__fastcall KioskPositioner::`vector deleting destructor'(KioskPositioner *this, char a2)
{
  KioskPositioner::~KioskPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A8);
  return this;
}
