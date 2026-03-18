/*
 * XREFs of ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x1801CEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180033290 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::`scalar deleting destructor'(
        CCompositionDistantLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionDistantLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 31));
  *((_QWORD *)this + 31) = 0LL;
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
