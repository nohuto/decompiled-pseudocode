/*
 * XREFs of ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x18019056C
 * Callers:
 *     ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x1801905D0 (--_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(CCompositionSkyBoxBrush *this)
{
  struct CResource *v1; // rdx
  struct CResource *v3; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 9);
  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  if ( v1 )
  {
    CResource::UnRegisterNotifierInternal(this, v1);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (struct CResource *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    CResource::UnRegisterNotifierInternal(this, v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
