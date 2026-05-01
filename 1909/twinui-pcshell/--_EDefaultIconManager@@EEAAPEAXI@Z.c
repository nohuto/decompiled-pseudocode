/*
 * XREFs of ??_EDefaultIconManager@@EEAAPEAXI@Z @ 0x180270E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DefaultIconManager@@EEAA@XZ @ 0x180270090 (--1DefaultIconManager@@EEAA@XZ.c)
 */

DefaultIconManager *__fastcall DefaultIconManager::`vector deleting destructor'(DefaultIconManager *this, char a2)
{
  DefaultIconManager::~DefaultIconManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
