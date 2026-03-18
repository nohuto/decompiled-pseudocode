/*
 * XREFs of ??1CHolographicExclusiveView@@EEAA@XZ @ 0x18020C690
 * Callers:
 *     ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x18020C6D0 (--_GCHolographicExclusiveView@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::~CHolographicExclusiveView(CHolographicExclusiveView *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CResource::~CResource(this);
}
