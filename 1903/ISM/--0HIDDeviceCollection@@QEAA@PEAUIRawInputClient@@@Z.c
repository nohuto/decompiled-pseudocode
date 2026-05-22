/*
 * XREFs of ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18001681C
 * Callers:
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180015018 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800157F8 (--0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800203AC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800204A8 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A0EF4 (--0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A2870 (--0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A374C (--0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::HIDDeviceCollection(
        HIDDeviceCollection *this,
        struct IRawInputClient *a2)
{
  HIDDeviceCollection *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 8) = 0;
  memset_0((char *)this + 88, 0, 0x218uLL);
  memset_0((char *)this + 624, 0, 0x800uLL);
  *((_DWORD *)this + 668) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 337) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_QWORD *)this + 341) = 0LL;
  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  result = this;
  *((_BYTE *)this + 2736) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_DWORD *)this + 688) = 0;
  return result;
}
