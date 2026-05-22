/*
 * XREFs of ??_EPenDeviceManager@@UEAAPEAXI@Z @ 0x180127980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenDeviceManager@@UEAA@XZ @ 0x1801277F8 (--1PenDeviceManager@@UEAA@XZ.c)
 */

PenDeviceManager *__fastcall PenDeviceManager::`vector deleting destructor'(PenDeviceManager *this, char a2)
{
  PenDeviceManager::~PenDeviceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
