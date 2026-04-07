/*
 * XREFs of ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x1800805B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CFullScreenMagnifier@@EEAA@XZ @ 0x180080524 (--1CFullScreenMagnifier@@EEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::`vector deleting destructor'(
        CFullScreenMagnifier *this,
        char a2)
{
  CFullScreenMagnifier::~CFullScreenMagnifier(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CFullScreenMagnifier *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
