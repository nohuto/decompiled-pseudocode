/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180019D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
