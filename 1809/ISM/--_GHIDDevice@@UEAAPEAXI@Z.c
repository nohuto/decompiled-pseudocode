/*
 * XREFs of ??_GHIDDevice@@UEAAPEAXI@Z @ 0x180069830
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDevice@@UEAA@XZ @ 0x18006986C (--1HIDDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HIDDevice *__fastcall HIDDevice::`scalar deleting destructor'(HIDDevice *this, char a2)
{
  HIDDevice::~HIDDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
