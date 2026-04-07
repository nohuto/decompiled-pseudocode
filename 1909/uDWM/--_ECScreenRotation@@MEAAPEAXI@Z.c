/*
 * XREFs of ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x18008ED90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800A4D0C (--1CScreenRotation@@MEAA@XZ.c)
 */

CScreenRotation *__fastcall CScreenRotation::`vector deleting destructor'(CScreenRotation *this, char a2)
{
  CScreenRotation::~CScreenRotation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CScreenRotation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
