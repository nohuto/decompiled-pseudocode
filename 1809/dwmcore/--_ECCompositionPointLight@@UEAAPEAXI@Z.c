/*
 * XREFs of ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180190070
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180066640 (--1CCompositionLight@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

struct CResource **__fastcall CCompositionPointLight::`vector deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionPointLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
  this[20] = 0LL;
  CCompositionLight::~CCompositionLight((CCompositionLight *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
