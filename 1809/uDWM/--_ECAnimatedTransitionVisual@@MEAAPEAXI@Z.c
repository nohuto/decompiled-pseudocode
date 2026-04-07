/*
 * XREFs of ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x18002FF38
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z @ 0x18004E360 (--_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18002FF7C (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::`vector deleting destructor'(
        CAnimatedTransitionVisual *this,
        char a2)
{
  CAnimatedTransitionVisual::~CAnimatedTransitionVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimatedTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
