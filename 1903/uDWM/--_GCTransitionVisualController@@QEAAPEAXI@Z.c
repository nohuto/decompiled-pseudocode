/*
 * XREFs of ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x18007EF04
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007E9CC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ABC8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CTransitionVisualController *__fastcall CTransitionVisualController::`scalar deleting destructor'(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  *this = (CBaseObject *)&CTransitionVisualController::`vftable';
  CTransitionVisualController::CleanupTransition((CTransitionVisualController *)this);
  v2 = this[1];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[1] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 14);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 7);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 3);
  (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CTransitionVisualController *)this;
}
