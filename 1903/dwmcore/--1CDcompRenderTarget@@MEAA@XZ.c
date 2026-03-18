/*
 * XREFs of ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800D98F0
 * Callers:
 *     ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800D98B0 (--_ECDcompRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDcompRenderTarget::~CDcompRenderTarget(CDcompRenderTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CDcompRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CResource::~CResource(this);
}
