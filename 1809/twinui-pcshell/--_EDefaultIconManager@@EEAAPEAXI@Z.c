/*
 * XREFs of ??_EDefaultIconManager@@EEAAPEAXI@Z @ 0x1801FE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DefaultIconManager@@EEAA@XZ @ 0x1801FD8E4 (--1DefaultIconManager@@EEAA@XZ.c)
 */

DefaultIconManager *__fastcall DefaultIconManager::`vector deleting destructor'(DefaultIconManager *this, char a2)
{
  DefaultIconManager::~DefaultIconManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F8);
  return this;
}
