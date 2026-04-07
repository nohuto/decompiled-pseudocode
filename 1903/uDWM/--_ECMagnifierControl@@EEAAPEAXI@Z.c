/*
 * XREFs of ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x180084680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x180084528 (--1CMagnifierControl@@EEAA@XZ.c)
 */

struct _RTL_GENERIC_TABLE *__fastcall CMagnifierControl::`vector deleting destructor'(
        struct _RTL_GENERIC_TABLE *this,
        char a2)
{
  CMagnifierControl::~CMagnifierControl(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RTL_GENERIC_TABLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
