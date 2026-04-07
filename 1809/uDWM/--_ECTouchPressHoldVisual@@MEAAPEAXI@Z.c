/*
 * XREFs of ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800AC970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800AC930 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 */

CTouchPressHoldVisual *__fastcall CTouchPressHoldVisual::`vector deleting destructor'(
        CTouchPressHoldVisual *this,
        char a2)
{
  CTouchPressHoldVisual::~CTouchPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTouchPressHoldVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
