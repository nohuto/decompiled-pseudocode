/*
 * XREFs of ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x180202690
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x180202644 (--1CD2DPrimitiveProperties@@MEAA@XZ.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::`scalar deleting destructor'(
        CD2DPrimitiveProperties *this,
        char a2)
{
  CD2DPrimitiveProperties::~CD2DPrimitiveProperties(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
