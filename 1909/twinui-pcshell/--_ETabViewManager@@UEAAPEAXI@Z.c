/*
 * XREFs of ??_ETabViewManager@@UEAAPEAXI@Z @ 0x18024B1B8
 * Callers:
 *     ??_ETabViewManager@@WDA@EAAPEAXI@Z @ 0x1800DA8E0 (--_ETabViewManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabViewManager@@UEAA@XZ @ 0x180249B8C (--1TabViewManager@@UEAA@XZ.c)
 */

TabViewManager *__fastcall TabViewManager::`vector deleting destructor'(TabViewManager *this, char a2)
{
  TabViewManager::~TabViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x5B0);
  return this;
}
