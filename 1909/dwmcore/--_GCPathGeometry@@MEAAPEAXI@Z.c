/*
 * XREFs of ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x18019DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180079DD8 (--1CGeometry@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CPathGeometry *__fastcall CPathGeometry::`scalar deleting destructor'(CPathGeometry *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CGeometry::~CGeometry((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
