/*
 * XREFs of ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800F21D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800F1C08 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 */

CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::`vector deleting destructor'(
        CDeviceGraphObjectsStore *this,
        char a2)
{
  CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
