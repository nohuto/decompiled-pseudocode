/*
 * XREFs of ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x18009E7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18009E718 (--1CFlickVisual@@MEAA@XZ.c)
 */

CFlickVisual *__fastcall CFlickVisual::`scalar deleting destructor'(CFlickVisual *this, char a2)
{
  CFlickVisual::~CFlickVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CFlickVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
