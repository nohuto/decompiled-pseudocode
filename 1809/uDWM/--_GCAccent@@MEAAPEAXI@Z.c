/*
 * XREFs of ??_GCAccent@@MEAAPEAXI@Z @ 0x1800364E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccent@@MEAA@XZ @ 0x180036524 (--1CAccent@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CAccent *__fastcall CAccent::`scalar deleting destructor'(CAccent *this, char a2)
{
  CAccent::~CAccent(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAccent *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
