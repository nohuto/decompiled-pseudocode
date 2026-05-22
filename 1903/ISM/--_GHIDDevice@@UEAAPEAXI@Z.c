/*
 * XREFs of ??_GHIDDevice@@UEAAPEAXI@Z @ 0x1800A5D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HIDDevice@@UEAA@XZ @ 0x1800A5D2C (--1HIDDevice@@UEAA@XZ.c)
 */

HIDDevice *__fastcall HIDDevice::`scalar deleting destructor'(HIDDevice *this, const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  HIDDevice::~HIDDevice(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
