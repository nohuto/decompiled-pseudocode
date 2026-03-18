/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x1800CAEA0
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x1800CAE60 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800CAF70 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 12);
  CSpriteVisualContent::~CSpriteVisualContent(this);
}
