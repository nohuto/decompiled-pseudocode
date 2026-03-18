/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18019DF68
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18019EA10 (--_G-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x180214A1C (--1CGenericInk@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x1801A19EC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)a1 + 16);
}
