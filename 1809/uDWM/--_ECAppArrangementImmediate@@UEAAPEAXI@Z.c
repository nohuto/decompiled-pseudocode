/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800A2F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800A2C70 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  CAppArrangementImmediate::~CAppArrangementImmediate(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppArrangementImmediate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
