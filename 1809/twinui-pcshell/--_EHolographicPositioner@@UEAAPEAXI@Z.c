/*
 * XREFs of ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1801B1B1C
 * Callers:
 *     ??_EHolographicPositioner@@WDA@EAAPEAXI@Z @ 0x1800A0370 (--_EHolographicPositioner@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801B15E4 (--1HolographicPositioner@@UEAA@XZ.c)
 */

HolographicPositioner *__fastcall HolographicPositioner::`vector deleting destructor'(
        HolographicPositioner *this,
        char a2)
{
  HolographicPositioner::~HolographicPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
