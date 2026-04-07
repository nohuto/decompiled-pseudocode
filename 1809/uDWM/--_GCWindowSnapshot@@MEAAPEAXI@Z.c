/*
 * XREFs of ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x180028550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180028364 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::`scalar deleting destructor'(CWindowSnapshot *this, char a2)
{
  CWindowSnapshot::~CWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
