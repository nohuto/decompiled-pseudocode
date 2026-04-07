/*
 * XREFs of ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x18008EDD4
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18004B818 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18008E8DC (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::`scalar deleting destructor'(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = *this;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[1];
  if ( v3 )
    CBaseObject::Release(v3);
  (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CWindowArrangementTransition *)this;
}
