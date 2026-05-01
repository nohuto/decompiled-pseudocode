/*
 * XREFs of ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x18010809C
 * Callers:
 *     ??_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z @ 0x1800B0FF0 (--_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180107AAC (--1AcrylicPolicyManager@@UEAA@XZ.c)
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
