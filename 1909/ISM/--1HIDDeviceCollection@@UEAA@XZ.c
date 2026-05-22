/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800A51FC
 * Callers:
 *     _AugmentedInputDeviceCollection::AugmentedInputDeviceCollection_::_1_::dtor$0 @ 0x18003B55E (_AugmentedInputDeviceCollection--AugmentedInputDeviceCollection_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18003C6DC (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x180099200 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x18009BF98 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1800A0DEE (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800A0F20 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800A2743 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800A2778 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     _SystemControlDeviceCollection::SystemControlDeviceCollection_::_1_::dtor$0 @ 0x1800A361F (_SystemControlDeviceCollection--SystemControlDeviceCollection_--_1_--dtor$0.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800A36B4 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800A42C0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800A48A0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800A4DD0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800A5250 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v3 = (void *)*((_QWORD *)this + 343);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
