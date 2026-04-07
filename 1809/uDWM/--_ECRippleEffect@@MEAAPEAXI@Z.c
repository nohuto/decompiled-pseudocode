/*
 * XREFs of ??_ECRippleEffect@@MEAAPEAXI@Z @ 0x18008FF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x18008FEC4 (--1CRippleEffect@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CRippleEffect::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CRippleEffect::~CRippleEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
