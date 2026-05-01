/*
 * XREFs of ??_ETabViewManager@@UEAAPEAXI@Z @ 0x1801D7B88
 * Callers:
 *     ??_ETabViewManager@@WDA@EAAPEAXI@Z @ 0x1800A0F30 (--_ETabViewManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabViewManager@@UEAA@XZ @ 0x1801D5644 (--1TabViewManager@@UEAA@XZ.c)
 */

TabViewManager *__fastcall TabViewManager::`vector deleting destructor'(TabViewManager *this, char a2)
{
  TabViewManager::~TabViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x5C8);
  return this;
}
