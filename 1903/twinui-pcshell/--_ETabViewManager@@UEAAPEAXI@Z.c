/*
 * XREFs of ??_ETabViewManager@@UEAAPEAXI@Z @ 0x18022BBC8
 * Callers:
 *     ??_ETabViewManager@@WDA@EAAPEAXI@Z @ 0x1800B7D70 (--_ETabViewManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabViewManager@@UEAA@XZ @ 0x18022A500 (--1TabViewManager@@UEAA@XZ.c)
 */

TabViewManager *__fastcall TabViewManager::`vector deleting destructor'(TabViewManager *this, char a2)
{
  TabViewManager::~TabViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x5B0);
  return this;
}
