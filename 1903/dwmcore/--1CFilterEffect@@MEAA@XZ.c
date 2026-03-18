/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x18019E0C0
 * Callers:
 *     ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18019EC50 (--_GCAffineTransform2DEffect@@UEAAPEAXI@Z.c)
 *     ??_ECShadowEffect@@UEAAPEAXI@Z @ 0x18019ECA0 (--_ECShadowEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x18019ED30 (--_GCCompositeEffect@@UEAAPEAXI@Z.c)
 *     ??_GCBrightnessEffect@@UEAAPEAXI@Z @ 0x18019ED80 (--_GCBrightnessEffect@@UEAAPEAXI@Z.c)
 *     ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x18019EE70 (--_GCColorMatrixEffect@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x18019EFB0 (--_GCFilterEffect@@MEAAPEAXI@Z.c)
 *     ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x180217440 (--_GCLinearTransferEffect@@UEAAPEAXI@Z.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180218530 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180218B40 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x18016B3B4 (-RemoveAll@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCP.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18019DF3C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801CC678 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((__int64)this + 136);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((CFilterEffect *)((char *)this + 72));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
