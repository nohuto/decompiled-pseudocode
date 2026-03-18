/*
 * XREFs of ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x18020C450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct CResource **__fastcall CRedirectedVisualContent::`vector deleting destructor'(struct CResource **this, char a2)
{
  struct CResource *v4; // rcx
  struct CResource *v5; // rcx

  *this = (struct CResource *)&CRedirectedVisualContent::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  v4 = this[7];
  if ( v4 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(this + 8);
  v5 = this[7];
  if ( v5 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CResource::~CResource((CResource *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
