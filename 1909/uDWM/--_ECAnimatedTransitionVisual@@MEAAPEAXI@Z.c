/*
 * XREFs of ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x18002E4C8
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z @ 0x18004FBD0 (--_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18002E50C (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
