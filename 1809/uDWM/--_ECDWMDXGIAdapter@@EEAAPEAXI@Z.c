/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180029EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180029384 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDWMDXGIAdapter *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
