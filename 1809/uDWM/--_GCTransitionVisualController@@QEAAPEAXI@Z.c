/*
 * XREFs of ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x1800788C4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007839C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
