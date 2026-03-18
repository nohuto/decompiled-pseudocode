/*
 * XREFs of ??1CGenericInk@@UEAA@XZ @ 0x180214A1C
 * Callers:
 *     ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18019F000 (--_GCGenericInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA72C (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18019DF68 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z @ 0x180251C84 (-RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  struct ISuperWetSource *v1; // rdx
  __int64 v3; // rcx

  v1 = (CGenericInk *)((char *)this + 64);
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CGenericInk::`vftable'{for `ISuperWetSource'};
  CWetInkManager::RemoveSource(*(CWetInkManager **)(v3 + 104), v1);
  FastRegion::CRegion::FreeMemory((void **)this + 29);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((CDirtyRegion **)this + 28);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((CGenericInk *)((char *)this + 80));
  CResource::~CResource(this);
}
