/*
 * XREFs of ??_GCOverlayRenderTarget@@EEAAPEAXI@Z @ 0x18019DA90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

COverlayRenderTarget *__fastcall COverlayRenderTarget::`scalar deleting destructor'(
        COverlayRenderTarget *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &COverlayRenderTarget::`vftable';
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
