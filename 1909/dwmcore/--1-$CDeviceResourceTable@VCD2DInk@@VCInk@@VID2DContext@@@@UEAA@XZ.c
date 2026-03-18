/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18019C67C
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18019C800 (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x18019C8B4 (--1CInk@@UEAA@XZ.c)
 *     ??_G?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18019D110 (--_G-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x1801A00B0 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

void __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)a1 + 16);
}
