/*
 * XREFs of ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x18021F858
 * Callers:
 *     ??_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z @ 0x1800B7B60 (--_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x18021F23C (--1PeoplePaneViewManager@@UEAA@XZ.c)
 */

PeoplePaneViewManager *__fastcall PeoplePaneViewManager::`vector deleting destructor'(
        PeoplePaneViewManager *this,
        char a2)
{
  PeoplePaneViewManager::~PeoplePaneViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x250);
  return this;
}
