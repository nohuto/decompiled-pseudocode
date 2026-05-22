/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800993D4
 * Callers:
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$0 @ 0x18003CDB0 (_SpatialRimDeviceCollection--Create_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$0 @ 0x18003CFB9 (_AugmentedInputDeviceCollection--Create_--_1_--dtor$0.c)
 *     _PenDeviceCollection::Create_::_1_::dtor$0 @ 0x18003CFDD (_PenDeviceCollection--Create_--_1_--dtor$0.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$0 @ 0x1800A13F5 (_MobileButtonDeviceCollection--Create_--_1_--dtor$0.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800A2B2D (_ConsumerControlDeviceCollection--Create_--_1_--dtor$0.c)
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800A3A94 (_SystemControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800993F0 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpatialRimDeviceCollection>::operator()(a1, *a1);
  return result;
}
