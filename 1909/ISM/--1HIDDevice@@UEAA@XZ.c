/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x1800A5B6C
 * Callers:
 *     _GazeHidDevice::GazeHidDevice_::_1_::dtor$0 @ 0x1800A482A (_GazeHidDevice--GazeHidDevice_--_1_--dtor$0.c)
 *     ??_GHIDDevice@@UEAAPEAXI@Z @ 0x1800A5BC0 (--_GHIDDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800A63AC (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDevice::~HIDDevice(HIDDevice *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &HIDDevice::`vftable';
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  memset_0((char *)this + 60, 0, 0x40uLL);
  RIMDevice::~RIMDevice(this);
}
