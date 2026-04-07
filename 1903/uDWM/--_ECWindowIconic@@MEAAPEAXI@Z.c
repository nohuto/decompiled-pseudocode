/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18003EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003EE64 (--1CWindowIconic@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
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
