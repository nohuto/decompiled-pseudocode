/*
 * XREFs of ??_G?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@MEAAPEAXI@Z @ 0x180174040
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSwRenderTargetGetBounds *__fastcall TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,23>::`scalar deleting destructor'(
        CSwRenderTargetGetBounds *this,
        char a2)
{
  *(_QWORD *)this = &TValueResource<MilColorTransform,MILCMD_COLORTRANSFORMRESOURCE,23>::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
