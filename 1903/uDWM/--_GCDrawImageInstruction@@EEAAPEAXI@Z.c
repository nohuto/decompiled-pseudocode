/*
 * XREFs of ??_GCDrawImageInstruction@@EEAAPEAXI@Z @ 0x180038390
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CDrawImageInstruction *__fastcall CDrawImageInstruction::`scalar deleting destructor'(
        CDrawImageInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDrawImageInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDrawImageInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
