/*
 * XREFs of ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800B0C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B0C10 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
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
