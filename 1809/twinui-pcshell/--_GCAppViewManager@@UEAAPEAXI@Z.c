/*
 * XREFs of ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x180108600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x180107C28 (--1CAppViewManager@@UEAA@XZ.c)
 */

CAppViewManager *__fastcall CAppViewManager::`scalar deleting destructor'(CAppViewManager *this, char a2)
{
  CAppViewManager::~CAppViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
