/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x18000C090
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18000C0CC (--1CDuckingManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}
