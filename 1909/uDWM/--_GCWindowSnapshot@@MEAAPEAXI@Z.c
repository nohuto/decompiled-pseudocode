/*
 * XREFs of ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x1800274C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180025874 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::`scalar deleting destructor'(CWindowSnapshot *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CWindowSnapshot::~CWindowSnapshot(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
