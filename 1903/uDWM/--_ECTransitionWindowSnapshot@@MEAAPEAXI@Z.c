/*
 * XREFs of ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x18003C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003C714 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::`vector deleting destructor'(
        CTransitionWindowSnapshot *this,
        char a2)
{
  CTransitionWindowSnapshot::~CTransitionWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTransitionWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
