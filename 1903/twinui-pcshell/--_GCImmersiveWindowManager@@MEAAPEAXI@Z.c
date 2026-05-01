/*
 * XREFs of ??_GCImmersiveWindowManager@@MEAAPEAXI@Z @ 0x180125314
 * Callers:
 *     ??_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z @ 0x1800B1D80 (--_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveWindowManager@@MEAA@XZ @ 0x180124D64 (--1CImmersiveWindowManager@@MEAA@XZ.c)
 */

CImmersiveWindowManager *__fastcall CImmersiveWindowManager::`scalar deleting destructor'(
        CImmersiveWindowManager *this,
        char a2)
{
  CImmersiveWindowManager::~CImmersiveWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
