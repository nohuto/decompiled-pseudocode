/*
 * XREFs of ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x180207C24
 * Callers:
 *     ??_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z @ 0x1800B73D0 (--_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicViewHostItemLedger@@UEAA@XZ @ 0x180207B70 (--1HolographicViewHostItemLedger@@UEAA@XZ.c)
 */

HolographicViewHostItemLedger *__fastcall HolographicViewHostItemLedger::`vector deleting destructor'(
        HolographicViewHostItemLedger *this,
        char a2)
{
  HolographicViewHostItemLedger::~HolographicViewHostItemLedger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
