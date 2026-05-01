/*
 * XREFs of ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x1802D5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x1802D5C74 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 */

VirtualDesktopDataSource *__fastcall VirtualDesktopDataSource::`vector deleting destructor'(
        VirtualDesktopDataSource *this,
        char a2)
{
  VirtualDesktopDataSource::~VirtualDesktopDataSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
