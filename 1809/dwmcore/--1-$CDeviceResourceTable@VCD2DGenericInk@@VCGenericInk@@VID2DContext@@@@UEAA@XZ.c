/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x180173638
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x180173FA0 (--_G-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x180198A7C (--1CGenericInk@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x180175C5C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(a1 + 16));
}
