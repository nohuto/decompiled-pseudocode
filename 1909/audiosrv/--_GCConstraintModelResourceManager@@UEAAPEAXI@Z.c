/*
 * XREFs of ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800FEFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800FEED8 (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 */

CConstraintModelResourceManager *__fastcall CConstraintModelResourceManager::`scalar deleting destructor'(
        CConstraintModelResourceManager *this,
        char a2)
{
  CConstraintModelResourceManager::~CConstraintModelResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
