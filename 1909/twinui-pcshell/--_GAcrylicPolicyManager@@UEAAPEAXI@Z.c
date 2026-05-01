/*
 * XREFs of ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1801270FC
 * Callers:
 *     ??_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z @ 0x1800D3F90 (--_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180126ABC (--1AcrylicPolicyManager@@UEAA@XZ.c)
 */

AcrylicPolicyManager *__fastcall AcrylicPolicyManager::`scalar deleting destructor'(
        AcrylicPolicyManager *this,
        char a2)
{
  AcrylicPolicyManager::~AcrylicPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D8);
  return this;
}
