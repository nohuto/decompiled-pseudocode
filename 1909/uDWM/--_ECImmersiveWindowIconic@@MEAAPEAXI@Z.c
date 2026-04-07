/*
 * XREFs of ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x180082BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x180082B94 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::`vector deleting destructor'(
        CImmersiveWindowIconic *this,
        char a2)
{
  CImmersiveWindowIconic::~CImmersiveWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImmersiveWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
