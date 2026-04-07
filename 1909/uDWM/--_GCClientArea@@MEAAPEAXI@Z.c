/*
 * XREFs of ??_GCClientArea@@MEAAPEAXI@Z @ 0x180025B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180018AB0 (--1CVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CClientArea *__fastcall CClientArea::`scalar deleting destructor'(CClientArea *this, char a2)
{
  *(_QWORD *)this = &CClientArea::`vftable';
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CClientArea *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
