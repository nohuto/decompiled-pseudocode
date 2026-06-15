/*
 * XREFs of ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x180115B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x180115430 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`vector deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2190);
  return this;
}
