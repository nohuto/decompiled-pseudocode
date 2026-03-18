/*
 * XREFs of ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801D2790
 * Callers:
 *     ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x1801D27F0 (--_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(CCompositionSkyBoxBrush *this)
{
  struct CResource *v1; // rdx
  struct CResource *v3; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 10);
  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  if ( v1 )
  {
    CResource::UnRegisterNotifierInternal(this, v1);
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = (struct CResource *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    CResource::UnRegisterNotifierInternal(this, v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  CSpriteVisualContent::~CSpriteVisualContent(this);
}
