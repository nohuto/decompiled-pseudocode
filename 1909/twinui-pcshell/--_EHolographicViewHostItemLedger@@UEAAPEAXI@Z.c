/*
 * XREFs of ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x180226E64
 * Callers:
 *     ??_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z @ 0x1800D9F40 (--_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicViewHostItemLedger@@UEAA@XZ @ 0x180226DB0 (--1HolographicViewHostItemLedger@@UEAA@XZ.c)
 */

HolographicViewHostItemLedger *__fastcall HolographicViewHostItemLedger::`vector deleting destructor'(
        HolographicViewHostItemLedger *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  HolographicViewHostItemLedger::~HolographicViewHostItemLedger(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
