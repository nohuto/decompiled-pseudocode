/*
 * XREFs of ??_G?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0GL@@@MEAAPEAXI@Z @ 0x1801740A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSwRenderTargetGetBounds *__fastcall TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,107>::`scalar deleting destructor'(
        CSwRenderTargetGetBounds *this,
        char a2)
{
  *(_QWORD *)this = &TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,107>::`vftable';
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
