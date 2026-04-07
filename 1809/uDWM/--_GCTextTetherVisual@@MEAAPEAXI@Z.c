/*
 * XREFs of ??_GCTextTetherVisual@@MEAAPEAXI@Z @ 0x180096610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x180096548 (--1CTextTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTextTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTextTetherVisual::~CTextTetherVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
