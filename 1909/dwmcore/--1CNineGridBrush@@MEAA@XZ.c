/*
 * XREFs of ??1CNineGridBrush@@MEAA@XZ @ 0x1800CECD0
 * Callers:
 *     ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x1800CEC90 (--_GCNineGridBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CNineGridBrush::~CNineGridBrush(CNineGridBrush *this)
{
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  CSpriteVisualContent::~CSpriteVisualContent(this);
}
