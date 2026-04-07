/*
 * XREFs of ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x1800459B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800459F4 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::`scalar deleting destructor'(CDirectTouchVisual *this, char a2)
{
  CDirectTouchVisual::~CDirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDirectTouchVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
