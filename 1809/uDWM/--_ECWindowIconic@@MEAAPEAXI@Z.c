/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18008D8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18008D7F4 (--1CWindowIconic@@MEAA@XZ.c)
 */

CWindowIconic *__fastcall CWindowIconic::`vector deleting destructor'(CWindowIconic *this, char a2)
{
  CWindowIconic::~CWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
