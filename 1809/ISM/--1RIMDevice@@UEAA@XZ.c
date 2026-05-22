/*
 * XREFs of ??1RIMDevice@@UEAA@XZ @ 0x1800697DC
 * Callers:
 *     ??_GRIMDevice@@UEAAPEAXI@Z @ 0x1800697A0 (--_GRIMDevice@@UEAAPEAXI@Z.c)
 *     ??1HIDDevice@@UEAA@XZ @ 0x18006986C (--1HIDDevice@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RIMDevice::~RIMDevice(RIMDevice *this)
{
  void *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &RIMDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    operator delete(v2, (const struct std::nothrow_t *)0x3D8);
    *((_QWORD *)this + 4) = 0LL;
  }
}
