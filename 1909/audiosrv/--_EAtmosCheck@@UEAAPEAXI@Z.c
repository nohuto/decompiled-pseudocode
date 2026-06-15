/*
 * XREFs of ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x18013DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18013D680 (--1AtmosCheck@@UEAA@XZ.c)
 */

AtmosCheck *__fastcall AtmosCheck::`vector deleting destructor'(AtmosCheck *this, char a2)
{
  AtmosCheck::~AtmosCheck(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x260);
  return this;
}
