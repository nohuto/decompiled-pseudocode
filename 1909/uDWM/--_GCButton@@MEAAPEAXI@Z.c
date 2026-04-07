/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x180026910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x1800252E4 (--1CButton@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CButton *__fastcall CButton::`scalar deleting destructor'(CButton *this, char a2)
{
  CButton::~CButton(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CButton *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
