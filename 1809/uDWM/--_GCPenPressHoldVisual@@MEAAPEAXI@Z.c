/*
 * XREFs of ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x18009A8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18009A81C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CPenPressHoldVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CPenPressHoldVisual::~CPenPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
