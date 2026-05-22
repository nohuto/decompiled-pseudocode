/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18006902C
 * Callers:
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x18005CF20 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x180061ED0 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x180065100 (--_GMobileButtonDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x180066DF0 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800677C0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x180067DE0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_ECameraControlDeviceCollection@@UEAAPEAXI@Z @ 0x180068530 (--_ECameraControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x180068FE0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$3 @ 0x180130F55 (_RIMRawInputProvider--Initialize_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x1801310F9 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1801313E1 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     _CameraControlDeviceCollection::Create_::_1_::dtor$2 @ 0x1801315E3 (_CameraControlDeviceCollection--Create_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
