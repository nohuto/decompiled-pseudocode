/*
 * XREFs of ??_GCIconicAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B1960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B18AC (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::`scalar deleting destructor'(
        CIconicAnimatedVisual *this,
        char a2)
{
  CIconicAnimatedVisual::~CIconicAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CIconicAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
