/*
 * XREFs of ??_EViewGroupManager@@UEAAPEAXI@Z @ 0x18024CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewGroupManager@@UEAA@XZ @ 0x18024CDE8 (--1ViewGroupManager@@UEAA@XZ.c)
 */

ViewGroupManager *__fastcall ViewGroupManager::`vector deleting destructor'(ViewGroupManager *this, char a2)
{
  ViewGroupManager::~ViewGroupManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
