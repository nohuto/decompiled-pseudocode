/*
 * XREFs of ??1CCompositor@@MEAA@XZ @ 0x1800B64D0
 * Callers:
 *     ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800B6570 (--_GCCompositor@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800B65B4 (-Shutdown@CCompositor@@IEAAXXZ.c)
 */

void __fastcall CCompositor::~CCompositor(CCompositor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CCompositor::`vftable';
  CCompositor::Shutdown(this);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
