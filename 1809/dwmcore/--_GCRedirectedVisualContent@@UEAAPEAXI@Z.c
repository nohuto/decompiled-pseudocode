/*
 * XREFs of ??_GCRedirectedVisualContent@@UEAAPEAXI@Z @ 0x1801D9B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CMILRefCountBase **__fastcall CRedirectedVisualContent::`scalar deleting destructor'(CMILRefCountBase **this, char a2)
{
  CMILRefCountBase *v4; // rcx

  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(this + 8);
  v4 = this[7];
  if ( v4 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CResource::~CResource((CResource *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
