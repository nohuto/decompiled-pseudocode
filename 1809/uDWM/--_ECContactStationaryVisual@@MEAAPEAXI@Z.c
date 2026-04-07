/*
 * XREFs of ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x180095B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180095A68 (--1CContactStationaryVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CContactStationaryVisual::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CContactStationaryVisual::~CContactStationaryVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
