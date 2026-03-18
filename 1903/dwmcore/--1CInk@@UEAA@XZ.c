/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x18019E174
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x18019F190 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18019DF3C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  *(_QWORD *)this = &CInk::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((CInk *)((char *)this + 56));
  CResource::~CResource(this);
}
