/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x180173718
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x180174760 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18017360C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CInk::~CInk(void **this)
{
  *this = &CInk::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((__int64)(this + 7));
  CResource::~CResource((CResource *)this);
}
