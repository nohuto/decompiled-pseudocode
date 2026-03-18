/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800665D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180066640 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

struct CResource **__fastcall CCompositionSpotLight::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionSpotLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
  this[20] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 21);
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
