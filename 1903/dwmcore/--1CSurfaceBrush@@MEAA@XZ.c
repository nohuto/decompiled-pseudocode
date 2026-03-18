/*
 * XREFs of ??1CSurfaceBrush@@MEAA@XZ @ 0x1800C6D00
 * Callers:
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x1800C6CC0 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  CSpriteVisualContent::~CSpriteVisualContent(this);
}
