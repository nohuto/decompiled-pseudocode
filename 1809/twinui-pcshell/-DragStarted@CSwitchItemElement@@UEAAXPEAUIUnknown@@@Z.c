/*
 * XREFs of ?DragStarted@CSwitchItemElement@@UEAAXPEAUIUnknown@@@Z @ 0x180301F00
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?DragStarted@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@@Z @ 0x180303D10 (-DragStarted@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CSwitchItemElement::DragStarted(struct IUnknown **this, struct IUnknown *a2)
{
  __int64 v4; // rdx
  struct IUnknown *v5; // rcx

  CMultitaskingViewElementBase::DragStarted((CMultitaskingViewElementBase *)this, a2);
  if ( (unsigned int)SHIsSameObject(this[73], a2) )
  {
    v5 = this[11];
    *((_BYTE *)this + 672) = 1;
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64))v5->lpVtbl[1].AddRef)(v5, v4, 3LL);
  }
}
