/*
 * XREFs of ?ButtonClicked@CSwitchItemElement@@UEAAXPEAUIGlyphButton@@@Z @ 0x180381E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemElement::ButtonClicked(CSwitchItemElement *this, struct IGlyphButton *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 44));
}
