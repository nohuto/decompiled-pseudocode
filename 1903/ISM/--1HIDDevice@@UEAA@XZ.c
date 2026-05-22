/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x1800A5D2C
 * Callers:
 *     _GazeHidDevice::GazeHidDevice_::_1_::dtor$0 @ 0x1800A49EA (_GazeHidDevice--GazeHidDevice_--_1_--dtor$0.c)
 *     ??_GHIDDevice@@UEAAPEAXI@Z @ 0x1800A5D80 (--_GHIDDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800A656C (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
